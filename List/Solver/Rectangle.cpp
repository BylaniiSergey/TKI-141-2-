/**
#include "Rectangle.h"

Rectangle::Rectangle(Point tl, int w, int h, Color c) : topLeft(tl), width(w), height(h), color(c)
{
    if (w < 0 || h < 0) throw std::invalid_argument("Width and height must be non-negative");
}

std::string Rectangle::ToString() const
{
    return "Rectangle: " + std::to_string(width) + "x" + std::to_string(height) +
        " at " + topLeft.ToString() + " with " + color.ToString();
}

Rectangle Rectangle::Read()
{
    return Rectangle({ 0, 0 }, 10, 5, Color(255, 0, 0));
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rect)
{
    os << rect.ToString();
    return os;
}
*/