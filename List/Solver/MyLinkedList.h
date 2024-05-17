#include <iostream>
#include <string>

struct Node {
    int data;
    Node* next;
};

class MyLinkedList {
private:
    Node* head;

public:
    MyLinkedList();
    MyLinkedList(std::initializer_list<int> initList);
    MyLinkedList(const MyLinkedList& other);
    MyLinkedList& operator=(const MyLinkedList& other);
    ~MyLinkedList();

    bool isEmpty() const;
    std::string toString() const;

    void push_back(int value);
    void push_front(int value);
    void pop_back();
    void pop_front();

    friend std::ostream& operator<<(std::ostream& os, const MyLinkedList& list);
};
