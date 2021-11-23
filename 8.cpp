#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void){

    int row_num;
    cout << "Enter number of rows: ";
    cin >> row_num;

    for (int i = 0; i < row_num; i++)
    {
        int count = 0;
        while (count < (row_num - i - 1) )
        {
            cout << ".";
            count++;
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}