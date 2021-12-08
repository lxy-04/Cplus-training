#include <iostream>
#include "list.h"

using namespace std;

List::List()
{
    top = 0;
}

bool List::isempty() const
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

bool List::isfull() const
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

bool List::add(const Item num)
{
    if (isfull())
    {
        cout << "List is full, cannot add" << endl;
        return false;
    }else
    {
        item[top++] = num;
        return true;
    }
}

void List::visit(void (*pf)(Item &))
{
    for (int i = 0; i < top; i++)
    {
        pf(item[i]);
    }
}

void visit_item(Item &items)
{
    cout << "item is " << items << endl;
}

