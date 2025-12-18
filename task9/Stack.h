#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <array>
#include <stdexcept>

template <typename T, int Size>
class Stack
{
    std::array<T, Size> arr;
    int top; // position of the last inserted element
    public:
        Stack()
        {
            top = -1;
        }
        bool isEmpty()
        {
            return top == -1;
        }
        bool isFull()
        {
            return top == Size-1;
        }
        void push(T elem)
        {
            if(isFull())
            {
                std::cout << "Stack is full - is not possible to add element" << std::endl;
               // throw std::overflow_error(s:"Stack is full");
            }
            top++;
            arr[top] = elem; 
        }
        T pop()
        {
            if(isEmpty())
            {
                std::cout << "Stack is empty - is not possible to remove element" << std::endl;
               // throw std::underflow_error(s:"Stack is empty");
            }
            T temp = arr[top];
            top--;
            return temp;
        }
        T peek()
        {
            if(isEmpty())
            {
                std::cout << "Stack is empty - is not possible to remove element" << std::endl;
               // throw std::underflow_error(s:"Stack is empty");
            }
            return arr[top];
        }
        int size()
        {
            return top + 1;
        }
};


#endif