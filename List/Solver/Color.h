/**
#include <iostream>

class Color
{
    uint8_t red, green, blue;

public:
    Color(int r, int g, int b);

    friend std::ostream& operator<<(std::ostream& os, const Color& color);

    std::string ToString() const;
};
*/