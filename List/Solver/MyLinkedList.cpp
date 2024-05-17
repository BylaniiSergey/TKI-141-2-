#include "MyLinkedList.h"

MyLinkedList::MyLinkedList() : head(nullptr) {}

MyLinkedList::MyLinkedList(std::initializer_list<int> initList) : head(nullptr) 
{
    for (int value : initList)
    {
        push_back(value);
    }
}

MyLinkedList::MyLinkedList(const MyLinkedList& other) : head(nullptr) 
{
    Node* temp = other.head;
    while (temp != nullptr) 
    {
        push_back(temp->data);
        temp = temp->next;
    }
}

MyLinkedList& MyLinkedList::operator=(const MyLinkedList& other) 
{
    if (this == &other) 
    {
        return *this;
    }

    // Очистить текущий список
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Копировать элементы
    Node* temp = other.head;
    while (temp != nullptr) 
    {
        push_back(temp->data);
        temp = temp->next;
    }

    return *this;
}

MyLinkedList::~MyLinkedList() 
{
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

bool MyLinkedList::isEmpty() const
{
    return head == nullptr;
}

std::string MyLinkedList::toString() const 
{
    std::string result;
    Node* temp = head;
    while (temp != nullptr) 
    {
        result += std::to_string(temp->data) + " ";
        temp = temp->next;
    }
    return result;
}

void MyLinkedList::push_back(int value)
{
    Node* newNode = new Node{ value, nullptr };
    if (head == nullptr) 
    {
        head = newNode;
    }
    else 
    {
        Node* temp = head;
        while (temp->next != nullptr) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void MyLinkedList::push_front(int value) 
{
    Node* newNode = new Node{ value, head };
    head = newNode;
}

void MyLinkedList::pop_back()
{
    if (head == nullptr) 
    {
        return;
    }
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void MyLinkedList::pop_front() 
{
    if (head == nullptr) 
    {
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

std::ostream& operator<<(std::ostream& os, const MyLinkedList& list) 
{
    os << list.toString();
    return os;
}