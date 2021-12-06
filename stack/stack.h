#ifndef _STACK_H_
#define _STACK_H_

typedef int Item;

class Stack
{
private:
    static const int SIZE = 5;
    Item item[SIZE];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item num);
    bool pop(Item &pop_num);
    void show() const;
};

void tips();

#endif