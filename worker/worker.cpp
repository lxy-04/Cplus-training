#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

void Worker::Data() const
{
    cout << "fullname is " << fullname << endl;
    cout << "id       is " << id       << endl;
}

void Worker::Get()
{
    cout << "Enter the fullname: " << endl;
    getline(cin, fullname);
    cout << "Enter the id number: " << endl;
    cin >> id;
    while (cin.get() != '\n');
}

void Singer::Get()
{
    cout << "Enter the panache: " << endl;
    cin >> panache;
    while (cin.get() != '\n');
}

void Singer::Data() const
{
    cout << "panache  is " << panache << endl;
}

void Singer::Set() 
{
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    Worker::Data();
    Data();
}


const char* Waiter::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Waiter::Get()
{
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

void Waiter::Data() const
{
    cout << "voice    is " << pv[voice] << endl;
}

void Waiter::Set()
{
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    Worker::Data();
    Data();
}

void Singingwaiter::Set()
{
    Worker::Get();
    Singer::Get();
    Waiter::Get();
}
void Singingwaiter::Show() const
{
    Worker::Data();
    Singer::Data();
    Waiter::Data();
}