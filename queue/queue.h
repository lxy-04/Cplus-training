#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <iostream>
using namespace std;

class Customer
{
private:
    int t_arrive;
    int t_process;
public:
    Customer(){ t_arrive = t_process = 0; }
    void set(int when);
    int t_arrive_val()  const { return t_arrive;  }
    int t_process_vel() const { return t_process; }
};

typedef Customer Item;

class Queue
{
private:
    static const int QSIZE = 10;
    const int qsize;
    int item_num;
    struct Node
    {
        Item item;
        struct Node *next;
    };
    Node *front;
    Node *tail;

public:
    Queue(int size = QSIZE);
    ~Queue();
    int item_numval() const { return item_num; } 
    bool isempty()    const { return item_num == 0;}
    bool isfull()     const { return item_num == qsize;}
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
    friend ostream &operator<<(ostream &os, const Queue &q);
};

#endif