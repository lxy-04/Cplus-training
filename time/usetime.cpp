#include <iostream>
#include "time.h"

using namespace std;

int main(void)
{
    Time Time1(0, 30);
    Time Time2(2, 46);
    Time Time4(2, 23);
    Time Time3;
    Time3 = Time1 * 2.3;
    cout << Time3 << Time1;
    return 0;
}
