/**
#include "..//Solver/LinkedList.h"


LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}


LinkedList::LinkedList(const std::initializer_list<int>& list) : LinkedList() {
    for (int data : list) {
        *this << data;
    }
}

//
LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


std::string LinkedList::toString() {
    std::string result = "";
    Node* current = head;
    while (current != nullptr) {
        result += std::to_string(current->data) + " ";
        current = current->next;
    }
    return result;
}

LinkedList& LinkedList::operator=(const LinkedList& other) {
    if (this != &other) {
        // Очистка текущего списка
        while (!isEmpty()) {
            *this >> 0;
        }

        // Копирование элементов из другого списка
        Node* current = other.head;
        while (current != nullptr) {
            *this << current->data;
            current = current->next;
        }
    }
    return *this;
}

LinkedList& LinkedList::operator<<(int data) {
    Node* newNode = new Node(data);
    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    return *this;
}

LinkedList& LinkedList::operator>>(int data) 
{
    if (!isEmpty()) {
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        else {
            tail = nullptr; // Если удаляем последний элемент
        }
        delete temp;
    }
    return *this;
}

bool LinkedList::isEmpty() 
{
    return head == nullptr;
}
*/