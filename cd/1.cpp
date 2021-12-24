#include <iostream>
#include <cstring>
#include "cd.h"

using namespace std;

void Bravo(const Cd &disk);
int main(void)
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("piano", "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;

    cout << "Using object directly: " << endl << endl;
    c1.Report();
    cout << endl;
    c2.Report();
    cout << "Using type cd * pointer to object: " << endl << endl;
    pcd -> Report();
    cout << endl;
    pcd = &c2;
    pcd -> Report();
    cout << "Calling a function with a Cd reference argument: " << endl << endl;
    Bravo(c1);
    cout << endl;
    Bravo(c2);
    cout << endl;

    cout << "Testing assignment" << endl << endl;
    Classic copy;
    copy = c2;
    copy.Report();
    return 0;
}
void Bravo(const Cd &disk)
{
    disk.Report();
}
