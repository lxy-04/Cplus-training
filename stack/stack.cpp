#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
    top = 0;
}

bool Stack::isempty() const
{
    bool flag;
    if (top == 0)
    {
        flag = true;
    }else
    {
        flag = false;
    }
    return flag;
}

bool Stack::isfull() const
{
    bool flag;
    if (top == SIZE)
    {
        flag = true;
    }else
    {
        flag = false;
    }
    return flag;
}

bool Stack::push(const Item num)
{
    if (isfull())
    {
        cout << "Stack is full, cannot push" << endl;
        return false;
    }else
    {
        item[top++] = num;
        return true;
    }
}

Item Stack::pop()
{
    Item pop_num;
    if (isempty())
    {
        cout << "Stack is empty, cannot pop" << endl;
    }else
    {
        pop_num = item[--top];
        return pop_num;
    }
    
}

void Stack::show() const
{
    for (int i = 0; i < top; i++)
    {
        cout << "Skack[" << i << "] is " << item[i] << endl;
    }
}

void tips()
{
    cout << "Enter p to push" << endl;
    cout << "Enter a to pop" << endl;
    cout << "Enter q to quit" << endl;
}