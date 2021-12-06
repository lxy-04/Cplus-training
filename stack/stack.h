#ifndef _STACK_H_
#define _STACK_H_

typedef int Item;

class Stack
{
private:
    static const int SIZE = 10;
    Item item[SIZE];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item num);
    Item pop();
    void show() const;
};

void tips();

#endif