#include <iostream>

using namespace std;

void _print(const char *s, const int num = 0);

int main(){

    _print("lixiaoyu");
    _print("xiaoyu");
    _print("yu", 4);
    return 0;
}


void _print(const char *s, const int num)
{
    static int count = 0 ;
    ++count;
    if (num == 0)
    {
        cout << "string is " << s << endl;
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            cout << "string is " << s << endl;
        }
        
    }
    
}