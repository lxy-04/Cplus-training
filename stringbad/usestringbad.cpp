#include <iostream>
#include "stringbad.h"

using namespace std;
using namespace STRINGBAD;

int main()
{
    stringbad str1("lixiaoyu");
    stringbad str2;
    stringbad str3 = str1;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    return 0;
}
