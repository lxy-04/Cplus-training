#include <iostream>
#include "stringgood.h"

using namespace std;
using namespace STRINGGOOD;

int main()
{
    stringgood str1("lixiaoyu");
    stringgood str2;
    stringgood str3 = str1;
    str2 = str1;
    cout << &str1 << endl;
    cout << &str2 << endl;
    cout << &str3 << endl;
    return 0;
}
