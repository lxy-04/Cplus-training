#include <iostream>

enum color {red, yellow};

using namespace std;

int main(void){

    // char ch;
    // int count = 0;
    // cin.get(ch);

    // while (ch != '@')
    // {
    //     cout << ch << endl;
    //     ++count;
    //     cin.get(ch);
    // }

    // cout << "count is " << count << endl;
    // color your_color;
    // your_color = yellow;
    // switch (your_color)
    // {
    // case yellow:
    //     cout << "color is yellow" << endl;
    //     break;
    
    // default:
    //     break;
    // }
    int a[3] = {1, 2, 4};
    int (*pf)[3] = &a;
    cout << (*pf)[1] << endl;


    return 0;
}