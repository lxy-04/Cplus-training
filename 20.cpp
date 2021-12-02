#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Change(string &str);

int main(void)
{
    string str;
    while (cin >> str && str != "q")
    {
        Change(str);

    }
    
    return 0;
}

void Change(string &str)
{
    
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
    cout << str << endl;

}