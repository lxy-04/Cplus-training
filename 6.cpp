#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void){

    double arr[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
    double* pt = arr;
    cout << "*pt  :" << *pt << endl;
    cout << "*++pt:" << *++pt << endl;
    cout << "++*pt:" << ++*pt << endl;
    cout << "(*pt)++:" << (*pt)++ << endl;
    cout << "*pt  :" << *pt << endl;
    cout << "*pt++  :" << *pt++ << endl;
    cout << "*pt  :" << *pt << endl;

    int i = 0;
    for (; i <= 6; i++)
    { 
        cout << "i: " << i << endl;
    }
    cout << "after loop i is " << i << endl;
    return 0;
}