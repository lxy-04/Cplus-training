#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

const int LIM = 4;

int main()
{
    Waiter bob("li", 314, 5);
    Singer bev("xiao", 522, 3);
    Waiter w_temp;
    Singer s_temp;

    Worker *pw[LIM] = {&bob, &bev, &w_temp, &s_temp};
    for (int i = 0; i < LIM; i++)
    {
        pw[i] -> Set();
        cout << endl;
    }
    for (int i = 0; i < LIM; i++)
    {
        pw[i] -> Show();
        cout << endl;
    } 
    return 0;
}