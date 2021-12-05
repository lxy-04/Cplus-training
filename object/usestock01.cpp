#include <iostream>
#include "stock01.h"

using namespace std;

int main(void)
{
    Stock Cat("lixiaoyu", 20, 2.6);
    Cat.show();
    Stock Dog = Stock("xiaoyu", 30, 3.34);
    Dog.show();
    Stock Stock2;
    Stock2.show();
    return 0;
}