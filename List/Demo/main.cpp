/**
#include "../Solver/Rectangle.h"

int main()
{
    Point p1{ 0, 0 };
    Color c1(255, 0, 0);
    Rectangle rect(p1, 10, 5, c1);

    std::cout << rect << std::endl;

    return 0;
}
*/

#include "..//Solver/figure.h"
int main() {
    try {
        Point p1{ 0, 0 };
        Point p2{ 10, 10 };
        Color c{ 255, 0, 0 };
        Rectangle rect(p1, p2, c);

        rect.draw();

        Font font("Arial", c, 12);
        std::cout << font << std::endl;

        Rectangle rect2(Point(0, 0), 20, 20, Color(0, 255, 0));
        rect2.draw();
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}


/**
#include <iostream>
#include "..//Solver/LinkedList.h"


* @brief Точка входа в программу
* @return 0 в случае успеха

int main() {
    LinkedList list = { 1, 2, 3 };

    std::cout << "Initial list: " << list.toString() << std::endl;

    list << 4;
    list << 5;

    std::cout << "After adding elements: " << list.toString() << std::endl;

    list >> 5;
    list >> 4;

    std::cout << "After removing elements: " << list.toString() << std::endl;

    return 0;
*/