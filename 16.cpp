#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <typename T>
void _swap(T &a, T &b);

int main(void){

    int i = 10;
    int j = 20;
    _swap<int>(i, j);
    cout << "i is: " << i << endl;
    cout << "j is: " << j << endl;
    double i_d = 10.2;
    double j_d = 20.2;
    _swap<double>(i_d, j_d);
    cout << "i is: " << i_d << endl;
    cout << "j is: " << j_d << endl;
    return 0;
}

template <typename T>
void _swap(T &a, T &b){

    T tmp;
    tmp = a;
    a = b;
    b = tmp;

}
