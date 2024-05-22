#include <iostream>
#include <string>

/**
* @brief - ���/��������
*/
class MyLinkedList 
{
private:

    struct Node
    {
        int data;
        Node* next = nullptr;
    };
    Node* head;

public:
    /**
    * @brief - �����������
    */
    MyLinkedList();
    MyLinkedList(std::initializer_list<int> initList);
    MyLinkedList(const MyLinkedList& other);
    MyLinkedList& operator=(const MyLinkedList& other);
    ~MyLinkedList();

    /**
    * @brief - ����������� �����������
    */
    MyLinkedList(MyLinkedList&& other) noexcept 
    {
        head = other.head;
        other.head = nullptr;
    }

    /**
    * @brief - �������� �����������
    */
    MyLinkedList& operator=(MyLinkedList&& other) noexcept 
    {
        if (this != &other) 
        {
            delete head;
            head = other.head;
            other.head = nullptr;
        }
    }

    /**
    * @brief - �������� ������
    */
    bool isEmpty() const;
    std::string toString() const;

    /**
    * @brief - �������
    */
    void push_back(int value);
    void push_front(int value);
    void pop_back();
    void pop_front();
    void insert(int idx, int elem);
    void remove(int idx);

    /**
    * @brief - �������� ������
    */
    friend std::ostream& operator<<(std::ostream& os, const MyLinkedList& list);
};