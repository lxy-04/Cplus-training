#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person::Person()
{
    lname = "";
    fname[0] = '\0';
}

Person::Person(const string &ln, const char* fn)
{
    lname = ln;
    int i = 0;
    for (i; fn[i] != '\0'; i++)
    {
        fname[i] = fn[i];
    }
    fname[i] = '\0';
}

void Person::show() const
{
    cout << "this is normal show." << endl;
    cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
    cout << "this is formal show." << endl;
    cout << lname << " " << fname << endl;
}
