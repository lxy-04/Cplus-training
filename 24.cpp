#include <iostream>

using namespace std;

int main(void)
{
    double a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << "a[i] at " << &a[i] << endl;
    }
    
    return 0;
}