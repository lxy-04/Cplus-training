#include <iostream>

using namespace std;

void show(int (*a)[3]);
int main(void)
{
    int a[2][3] = {{1,22,33}, {25,376,5678}};
    show(a);
    int b[3] = {1, 213, 56};
    int *p = b;
    cout << p[2] << endl;
    cout << *(b+1) << endl;
    return 0;
}

void show(int (*a)[3])
{
    cout << *(a[0] + 1) << endl;
}
