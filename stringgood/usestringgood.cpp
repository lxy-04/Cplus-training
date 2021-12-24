#include <iostream>
#include "stringgood.h"

using namespace std;
using namespace STRINGGOOD;

int main()
{
    stringgood str1("LiXiaoYu");
    stringgood str2("sUNziyAN");
    stringgood str3 = str1 + str2;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    return 0;
}
