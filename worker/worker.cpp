#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

void Worker::Show() const
{
    cout << "fullname is " << fullname << endl;
    cout << "id       is " << id       << endl;
}

void Worker::Set()
{
    cout << "Enter the fullname: " << endl;
    getline(cin, fullname);
    cout << "Enter the id number: " << endl;
    cin >> id;
    while (cin.get() != '\n');
}

void Singer::Set()
{
    Worker::Set();
    cout << "Enter the panache: " << endl;
    cin >> panache;
    while (cin.get() != '\n');
}

void Singer::Show() const
{
    Worker::Show();
    cout << "panache  is " << panache << endl;
}

const char* Waiter::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Waiter::Set()
{
    Worker::Set();
    int i = 0;
    for (i; i < Vtype; i++)
    {
        cout << pv[i] << " ";
        if (i % 4 == 3)
        {
            cout << endl;
        }
    }
    if (i % 4 != 0)
    {
       cout << endl;
    }
    cout << "Enter the voice: " << endl;
    cin >> voice;
    while (cin.get() != '\n');
}

void Waiter::Show() const
{
    Worker::Show();
    cout << "voice    is " << pv[voice] << endl;
}
