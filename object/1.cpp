#include <iostream>
#include "stock01.h"

using namespace std;

const int SIZE = 3;

int main(void)
{
    Stock Stock_ar[SIZE] = 
    {
        Stock("lixiaoyu", 30, 1.34),
        Stock("xiaoli", 20, 2.32),
        Stock("xiaoyu", 50, 0.123)
    };
    const Stock *top = &Stock_ar[0];
    for (int i = 1; i < SIZE; i++)
    {
        top = &top->topvalue(Stock_ar[i]);
    }
    top->show();
    
    return 0;
}