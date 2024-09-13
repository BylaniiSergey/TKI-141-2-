
#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdint>

// Структура для представления точки
struct Point {
    int x, y;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);
    friend std::istream& operator>>(std::istream& is, Point& point);
    friend bool operator==(const Point& lhs, const Point& rhs);
    friend bool operator!=(const Point& lhs, const Point& rhs);
};

// Класс для представления цвета
class Color {
public:
    uint8_t red, green, blue;

    Color(int r, int g, int b);

    friend std::ostream& operator<<(std::ostream& os, const Color& color);
    friend std::istream& operator>>(std::istream& is, Color& color);
    std::string toString() const;
};

// Класс для представления шрифта
class Font {
public:
    std::string name;
    Color color;
    int size;

    Font(const std::string& n, const Color& c, int s);

    friend std::ostream& operator<<(std::ostream& os, const Font& font);
};

// Абстрактный базовый класс для фигур
class Figure {
public:
    virtual void draw() const = 0;
    virtual std::string toString() const = 0;
    virtual ~Figure() = default;
};

// Класс для представления прямоугольника
class Rectangle : public Figure {
private:
    Point topLeft, bottomRight;
    Color fillColor;

    void validateDimensions() const;

public:
    Rectangle(const Point& topLeft, const Point& bottomRight, const Color& fillColor);
    Rectangle(const Point& topLeft, int width, int height, const Color& fillColor);

    void draw() const override;
    std::string toString() const override;

    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle);
    friend std::istream& operator>>(std::istream& is, Rectangle& rectangle);

    static Rectangle read(std::istream& is);
};
