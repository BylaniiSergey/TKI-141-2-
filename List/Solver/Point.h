/**
#include <iostream>

struct Point
{
    int x, y;

    bool operator==(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);

    std::string ToString() const;
};
*/