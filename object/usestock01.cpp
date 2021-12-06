#include <iostream>
#include "stock01.h"

using namespace std;

int main(void)
{
    Stock Cat("lixiaoyu", 20, 2.6);
    Cat.show();
    Stock Dog = Stock("xiaoyu", 30, 3.34);
    Dog.show();
    const Stock top = Cat.topvalue(Dog);
    top.show();
    



    return 0;
}