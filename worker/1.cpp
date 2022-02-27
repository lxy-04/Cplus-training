#include <iostream>
#include <string>
#include <cstring>
#include "worker.h"

using namespace std;

const int NUM = 3;

int main()
{
    Worker *pw[NUM] = {NULL, NULL, NULL};
    char type;
    for (int i = 0; i < NUM; i++)
    {
        cout << "Enter the number 'q, w, s, a', q: quit, w: waiter, s: singer, a: singingwaiter " << endl;
        cin >> type;
        while (strchr("qwsa", type) == NULL)
        {
            cout << "Enter the number 'q, w, s, a', q: quit, w: waiter, s: singer, a: singingwaiter " << endl;
            cin >> type;
        }
        while(cin.get() != '\n');
        if (type == 'q')
        {
            break;
        }
        else if (type == 'a')
        {
            pw[i] = new Singingwaiter;
            pw[i] -> Set();
        }
        else if (type == 'w')
        {
            pw[i] = new Waiter;
            pw[i] -> Set();            
        }
        else if (type == 's')
        {
            pw[i] = new Singer;
            pw[i] -> Set();
        }
        cout << endl;
    }
    for (int i = 0; i < NUM; i++)
    {
        pw[i] -> Show();
        cout << endl;
    } 
    for (int i = 0; i < NUM; i++)
    {
        delete pw[i];
    }
    
    return 0;
}