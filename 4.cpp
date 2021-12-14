#include <iostream>
#include <cstring>
#include <string>

using namespace std;

double &cube(double &ra);

int main(void){
    
    // char first_name[80];
    // char last_name[80];

    // cout << "Enter your first name: " ;
    // cin >> first_name;
    // cout << "Enter your last name: " ; 
    // cin >> last_name;
    // cout << "Here's " << first_name << ", " << last_name << endl;

    // string first_name_st;
    // string last_name_st;
    
    // cout << "Enter your first name: " ;
    // getline(cin, first_name_st);
    // cout << "Enter your last name: " ; 
    // getline(cin, last_name_st);
    // cout << "Here's " << first_name_st << ", " << last_name_st << endl;
    //char ch = 50;
    double a = 10.2;
    double &b = cube(a);
    cout << "b at " << &b << endl;
    cout << "a at " << &a << endl;
    // int a = 10;
    // int *pa;
    // pa = &a;
    // cout << "pa at " << pa << endl;
    // cout << "a  at " << &a << endl; 
    return 0;
}
double& cube(double &ra)
{
    double *pa;
    *pa = ra;
    return *pa;
}