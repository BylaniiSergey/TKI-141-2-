/**
#include <sstream>
#include "Color.h"
#include "Shape.h"

Color::Color(int r, int g, int b)
{
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
        throw std::invalid_argument("Color values must be between 0 and 255");
    red = r; green = g; blue = b;
}

std::string Color::ToString() const
{
    std::ostringstream oss;
    oss << "rgb(" << static_cast<int>(red) << ", "
        << static_cast<int>(green) << ", "
        << static_cast<int>(blue) << ")";
    return oss.str();
}

std::ostream& operator<<(std::ostream& os, const Color& color)
{
    os << "Color(" << (int)color.red << ", " << (int)color.green << ", " << (int)color.blue << ")";
    return os;
}
*/