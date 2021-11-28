#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main(void){

    vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/3.0;
    a2[2] = 1.0/3.0;
    a2[3] = 1.0/3.0;
    
    

    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    double* p1 = a1;
    p1[1] = 30.9;
    cout << a1[1] << endl;

    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;

    int n = 5;
    while (n-- != 0)
    {
        cout << n << endl;
    }
    

    return 0;
}