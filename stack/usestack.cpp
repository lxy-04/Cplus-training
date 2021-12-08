#include <iostream>
#include "stack.h"
#include <cctype>


using namespace std;

int main(void)
{
    char ch;
    double all_payment = 0;
    Item push_num;
    Item pop_num;
    Stack Stack;

    tips();
    while (cin >> ch && ch != 'q')
    {
        if (toupper(ch) == 'A')
        {
            Stack.pop(pop_num);
            cout << pop_num.fullname << " pop.";
            cout << "It's payment is " << pop_num.payment << endl;
        }else if (toupper(ch) == 'P')
        {
            cout << "Enter a payment to push" << endl;
            cin >> push_num.payment;
            all_payment += push_num.payment;
            cin.sync();
            cout << "Enter a fullname to push" << endl;
            cin.get(push_num.fullname, 35);
            Stack.push(push_num);
            cout << "all payment is " << all_payment << endl;
        }
        tips();
    }
    Stack.show();
    

    return 0;
}