#include <iostream>
#include "stack.h"
#include <cctype>


using namespace std;

int main(void)
{
    char ch;
    Item push_num;
    Item pop_num;
    Stack Stack;

    tips();
    while (cin >> ch && ch != 'q')
    {
        if (toupper(ch) == 'A')
        {
            Stack.pop(pop_num);
            cout << pop_num << " pop." << endl;
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