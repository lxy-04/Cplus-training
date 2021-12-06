#include <iostream>
#include "stack.h"
#include <cctype>


using namespace std;

int main(void)
{
    char ch;
    Item push_num;
    Stack Stack;

    tips();
    while (cin >> ch && ch != 'q')
    {
        if (toupper(ch) == 'A')
        {
            Item _pop_num = Stack.pop();
            cout << _pop_num << " pop." << endl;
        }else if (toupper(ch) == 'P')
        {
            cout << "Enter a num to push" << endl;
            cin >> push_num;
            Stack.push(push_num);
        }
        tips();
    }
    Stack.show();
    

    return 0;
}