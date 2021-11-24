#include <iostream>
#include <cstring>
#include <string>
#include <ctime>

const int MAX = 5;

using namespace std;

int main(void){

    double fish[5];
    int i = 0;

    cout << "Enter the weight of " << MAX << " fish" << endl;
    cout << "fish #1" << ": ";
    while (i < MAX && cin >> fish[i])
    {

        if (++i < MAX)
        {
            cout << "fish #" << i+1 << ": ";
        }
        
    }
    
    
    return 0;
}