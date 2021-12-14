#include <iostream>
#include "complexe0.h"

using namespace std;
using namespace COMPLEXE;

int main()
{
    Complexe a(3.0, 4.0);
    Complexe c;
    Complexe d = a;
    cout << d << endl;
    cout << "a at " << &a << endl;
    cout << "d at " << &d << endl;
    cout << "Enter a complex number (q to quit)." << endl;
    while (cin >> c)
    {
        cout << "c is " << c << endl;
        cout << "complexe conjugate is " << ~c;
        cout << "a is " << a;
        cout << "a + c is " << a + c;
        cout << "a - c is " << a - c;
        cout << "a * c is " << a * c;
        cout << "2 * c is " << 2 * c;
        cout << "Enter a complex number (q to quit)." << endl;
    }
    cout << "DONE!" << endl;
    return 0;
}