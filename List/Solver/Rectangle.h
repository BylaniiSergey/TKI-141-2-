/**
#include "Point.h"
#include "Color.h"
#include "Shape.h"
#include <string>

class Rectangle : public Shape
{
    Point topLeft;
    int width, height;
    Color color;

public:

    Rectangle(Point tl, int w, int h, Color c);

    std::string ToString() const override;

    static Rectangle Read();

    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rect);
};
*/