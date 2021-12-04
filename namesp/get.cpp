#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 3;

int main(void)
{
    golf golfs[SIZE] ;
    int count = 0;
    int full_enter = 0;
    // setgolf(golfs[0], "lixiaoyu", 1000);
    // showgolf(golfs[0]);
    while ( full_enter < SIZE )
    {
        setgolf(golfs[count]);
        showgolf(golfs[count]);
        if (golfs[count].fullname[count] == '\0')
        {
            break;
        }
        else{
            ++full_enter;
        }
        ++count;
        count = count % SIZE;
    }
    
    for (int i = 0; i < count; i++)
    {
        if (setgolf(golfs[i]))
        {
            cout << "origin golf is: " << endl;
            showgolf(golfs[i]);
            handicap(golfs[i], i + 200);
            cout << "After reseting: " << endl;
            showgolf(golfs[i]);
        }
    }
    
}