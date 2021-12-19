#ifndef _STACK_NEW_H_
#define _STACK_NEW_H_
#include <iostream>

using namespace std;

typedef int Item;

class Stack
{
private:
    static const int MAX = 10;
    Item *pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack &st);
    ~Stack();
    int size_val() const { return size; }
    int  top_val() const { return top;  }
    bool isempty() const { return top == 0; }
    bool  isfull() const { return top == size; }
    bool push(const Item &it);
    bool pop(Item &it);
    Stack &operator=(const Stack &st);
    friend ostream&operator<<(ostream &os, const Stack &st);
};

#endif