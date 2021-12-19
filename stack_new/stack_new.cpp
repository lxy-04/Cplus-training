#include "stack_new.h"
#include <iostream>

using namespace std;

Stack::Stack(int n)
{
    pitems = new Item[n];
    size = n; 
    top = 0;
}
Stack::Stack(const Stack &st)
{
    pitems = new Item[st.size];
    size = st.size;
    top  = st.top;
    for (int i = 0; i < top; i++)
    {
        pitems[i] = st.pitems[i];
    }
}
Stack& Stack::operator=(const Stack &st)
{
    if (&st == this)
    {
        return *this;
    }
    delete []pitems;
    pitems = new Item[st.size];
    size = st.size;
    top  = st.top;
    for (int i = 0; i < top; i++)
    {
        pitems[i] = st.pitems[i];
    }
    return *this;
}
bool Stack::push(const Item &it)
{
    if (isfull())
    {
        return false;
    }
    pitems[top++] = it;
    return true;
}
bool Stack::pop(Item &it)
{
    if (isempty())
    {
        return false;
    }
    it = pitems[--top];
    return true;
}
Stack::~Stack()
{
    delete []pitems;
}
ostream &operator<<(ostream &os, const Stack& st)
{
    os << "stack's size is: " << st.top << endl;
    for (int i = 0; i < st.top; i++)
    {
        os << i << " element is: " << st.pitems[i] << endl;
    }
    return os;
}

