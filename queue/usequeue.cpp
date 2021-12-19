#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    int qs, i, customer;
    qs = i = customer = 0;
    Item tmp;
    cout << "Enter the size of queue: ";
    cin >> qs;
    Queue Queue1(qs);
    while (!Queue1.isfull())
    {
        tmp.set(i++);
        Queue1.enqueue(tmp);
        customer++;
    }
    cout << Queue1;
    while (!Queue1.isempty())
    {
        cout << endl;
        Queue1.dequeue(tmp);
        cout << Queue1;
    }

    return 0;
}