#include <iostream>
#include "person.h"
#include <string>

using namespace std;

int main(void)
{
    // Person one;
    // Person two("Smythecraft");
    // Person three("Dimwiddy", "Sam");
    Person Persons[3] = {
        Person(),
        Person("Smythecraft"),
        Person("Dimwiddy", "Sam"),
    };
    for (int i = 0; i < 3; i++)
    {
        Persons[i].FormalShow();
        Persons[i].show();
        cout << endl;
    }
    return 0;
}