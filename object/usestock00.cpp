#include <iostream>
#include "stock00.h"

using namespace std;

int main(void)
{
    Stock Cat;
    Cat.acquire("lixiaoyu", 20, 12.50);
    Cat.show();
    Cat.buy(15, 18.125);
    Cat.show();
    Cat.sell(400, 20.00);
    Cat.show();
    
    return 0;
}