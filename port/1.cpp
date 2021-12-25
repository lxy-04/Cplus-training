#include <iostream>
#include "port.h"

using namespace std;

int main(void)
{
    Port port1("ABC", "SWEET", 200);
    cout << port1 << endl;
    cout << "-------------" << endl;
    Vport vp("EFG", "vintage", 300, "old jack", 40);
    cout << vp << endl;
    Vport vp2(vp);
    cout << "-------------" << endl;
    cout << vp2 << endl;
    Port *p_port = &vp;
    p_port -> Show();
    return 0;
}