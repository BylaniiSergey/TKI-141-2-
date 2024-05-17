#include <iostream>
#include "..//Solver/MyLinkedList.h"

int main() {
    MyLinkedList list = { 1, 2, 3, 4 };
    std::cout << "�������������� ������: " << list << std::endl;

    list.push_back(5);
    std::cout << "������ ����� push_back(5): " << list << std::endl;

    list.pop_front();
    std::cout << "������ ����� pop_front(): " << list << std::endl;

    list.pop_back();
    std::cout << "������ ����� pop_back(): " << list << std::endl;

    return 0;
}