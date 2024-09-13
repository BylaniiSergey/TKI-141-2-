/**
#pragma once
#include <string>
#include "Node.h"


* @brief - Создаём класс MyLinkedList

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList();
    LinkedList(const std::initializer_list<int>& list);
    ~LinkedList();

    std::string toString();

    LinkedList& operator=(const LinkedList& other);
    LinkedList& operator<<(int data);
    LinkedList& operator>>(int data);

    bool isEmpty();
};
*/

/**
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
    * @brief - Конструктор класса MyLinkedList

    MyLinkedList();

    /**
    * @brief - Конструктор, который создает список и заполняет её значениями
    * @param initList - Значения для инициализации
    
    MyLinkedList(std::initializer_list<int> initList);

    /**
    * @brief - Конструктор копирования для класса MyLinkedList
    * @param other - Ссылка на другой объект MyLinkedList, который будет скопирован
    
    MyLinkedList(const MyLinkedList& other);

    /**
    * @brief - Деструктор для очистки объекта списка
    
    ~MyLinkedList();

    /**
    * @brief - Конструктор перемещения
    * @other - Ссылка на другой объект MyLinkedList, который будет перемещён
    
    MyLinkedList(MyLinkedList&& other) noexcept;

    /**
    * @brief - Оператор перемещения
    * @param other - Ссылка на другой объект MyLinkedList, который будет перемещён
    * @return Ссылка на элемент списка, который был перемещён
    
    MyLinkedList& operator=(const MyLinkedList& other);

    /**
    * @brief - Проверка списка
    
    bool isEmpty() const;
    std::string toString() const;

    /**
    * @brief - Функция добавления элемента в конец списка
    * @param value - Значение, которое будет добавлено в список
    
    void push_back(int value);

    /**
    * @brief - Функция добавления элемента в начало списка
    * @param value - Значение, которое будет добавлено в список
    
    void push_front(int value);

    /**
    * @brief - Функция удаления последнего элемента из списка
    
    void pop_back();

    /**
    * @brief - Функция удаления первого элемента из списка
    
    void pop_front();

    /**
    * @brief - Функция вставки элемента по указанному индексу
    * @param idx - Индекс элемента в списке
    * @param elem - Элемент, который нужно найти
    
    void insert(int idx, int elem);

    /**
    * @brief - Функция удаления элемента по указанному индексу
    * @param idx - Индекс элемента в списке
    
    void remove(int idx);

    /**
    * @brief - Оператор сдвига
    
    friend std::ostream& operator<<(std::ostream& os, const MyLinkedList& list);
};
*/