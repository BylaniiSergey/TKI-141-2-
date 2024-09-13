
#include "figure.h"
#include <sstream>

// Определение операторов для структуры Point
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "Point(" << point.x << ", " << point.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Point& point) {
    is >> point.x >> point.y;
    return is;
}

bool operator==(const Point& lhs, const Point& rhs) {
    return lhs.x == rhs.x && lhs.y == rhs.y;
}

bool operator!=(const Point& lhs, const Point& rhs) {
    return !(lhs == rhs);
}

// Определение класса Color
Color::Color(int r, int g, int b) {
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {
        throw std::out_of_range("Color values must be between 0 and 255");
    }
    red = static_cast<uint8_t>(r);
    green = static_cast<uint8_t>(g);
    blue = static_cast<uint8_t>(b);
}

std::string Color::toString() const
{
    std::ostringstream oss;
    oss << "rgb(" << static_cast<int>(red) << ", "
        << static_cast<int>(green) << ", "
        << static_cast<int>(blue) << ")";
    return oss.str();
}

std::ostream& operator<<(std::ostream& os, const Color& color) {
    os << "Color(" << static_cast<int>(color.red) << ", "
        << static_cast<int>(color.green) << ", "
        << static_cast<int>(color.blue) << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Color& color) {
    int r, g, b;
    is >> r >> g >> b;
    color = Color(r, g, b);
    return is;
}

// Определение класса Font
Font::Font(const std::string& n, const Color& c, int s) : name(n), color(c), size(s) {}

std::ostream& operator<<(std::ostream& os, const Font& font) {
    os << "Font(" << font.name << ", " << font.color << ", " << font.size << ")";
    return os;
}

// Определение методов класса Rectangle
Rectangle::Rectangle(const Point& topLeft, const Point& bottomRight, const Color& fillColor)
    : topLeft(topLeft), bottomRight(bottomRight), fillColor(fillColor) {
    validateDimensions();
}

Rectangle::Rectangle(const Point& topLeft, int width, int height, const Color& fillColor)
    : topLeft(topLeft), bottomRight{ topLeft.x + width, topLeft.y + height }, fillColor(fillColor) {
    validateDimensions();
}

void Rectangle::validateDimensions() const {
    if (bottomRight.x <= topLeft.x || bottomRight.y <= topLeft.y) {
        throw std::invalid_argument("Invalid rectangle dimensions");
    }
}

void Rectangle::draw() const {
    std::cout << toString() << std::endl;
}

std::string Rectangle::toString() const {
    return "Rectangle(" + std::to_string(topLeft.x) + ", " + std::to_string(topLeft.y) +
        ", " + std::to_string(bottomRight.x) + ", " + std::to_string(bottomRight.y) +
        ", " + fillColor.toString() + ")";
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle) {
    os << rectangle.toString();
    return os;
}

std::istream& operator>>(std::istream& is, Rectangle& rectangle) {
    rectangle = Rectangle::read(is);
    return is;
}

Rectangle Rectangle::read(std::istream& is) {
    int x1, y1, x2, y2, r, g, b;
    is >> x1 >> y1 >> x2 >> y2 >> r >> g >> b;
    return Rectangle(Point{ x1, y1 }, Point{ x2, y2 }, Color(r, g, b));
}
