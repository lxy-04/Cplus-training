#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 3;

int main(void)
{
    golf golfs[SIZE] ;
    int count = 0;

    while ( count < SIZE )
    {
        setgolf(golfs[count]);
        if (golfs[count].fullname[count] == '\0')
            break;
        ++count;
    }
    
    for (int i = 0; i < count; i++)
    {
        if (setgolf(golfs[i]))
        {
            cout << "\norigin golf is: " << endl;
            showgolf(golfs[i]);
            handicap(golfs[i], i + 200);
            cout << "After reseting: " << endl;
            showgolf(golfs[i]);
        }
    }
    
}