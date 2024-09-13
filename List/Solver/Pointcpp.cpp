/**
#include <sstream>
#include "Point.h"

bool Point::operator==(const Point& other) const
{
    return x == other.x && y == other.y;
}

std::ostream& operator<<(std::ostream& os, const Point& point)
{
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

std::string Point::ToString() const
{
    std::ostringstream oss;
    oss << "rgb(" << static_cast<int>(x) << ", "
        << static_cast<int>(y) << ")";
    return oss.str();
}
*/