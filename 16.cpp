#include <iostream>
#include <string>

using namespace std;

double &cube(double& x);

int main(void){

    double a = 10; 
    double b= cube(a);
    b++;
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
    double &c = b;
    double &d = b;
    c++;
    cout << "d is: " << d << endl;

}

double &cube(double& x){
    x++;
    return x;
}