#include <iostream>
#include <cstdlib>
#include "queue.h"

using namespace std;

void Customer::set(int when)
{
    t_arrive = rand() % 10 + 1;
    t_process = when;
}

Queue::Queue(int size): qsize(size)
{
    front = tail = nullptr;
    item_num = 0;

}

bool Queue::enqueue(const Item &it)
{
    if (isfull())
        return false;
    //new a space
    Node *add = new Node;
    //assignment
    add->item = it;
    add->next = nullptr;
    //add queue length
    ++item_num;
    //special case
    if (front == nullptr)
    {
         front = add;
    }
    else
    {
        //connect
        tail->next = add;
    }
    tail = add;
    return true;
}
bool Queue::dequeue(Item &item)
{
    if (isempty())
        return false;
    //assignment
    item = front->item;
    //minus queue length
    --item_num;
    //keep up front as tmp
    Node *tmp = front;
    //renew front
    front = front->next;
    //free
    delete tmp;
    if (item_num == 0)
        tail = nullptr;
    return true;
}
ostream &operator<<(ostream &os, const Queue &q)
{
    Queue::Node *tmp = q.front;
    int a = 0;
    if (tmp == nullptr)
    {
        os << "empty" << endl;
        return os;
    }
    
    while (tmp != nullptr)
    {
        a++;
        os << "the " << a << " customer's arrive time is: ";
        os << (tmp->item).t_arrive_val() << endl;
        tmp = tmp->next;
    }
    return os;
}
Queue::~Queue()
{
    Node *tmp;
    while (front != nullptr)
    {
        tmp = front;
        front = tmp->next;
        delete tmp;
    }
    
}