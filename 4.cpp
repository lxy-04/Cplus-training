#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void){
    
    char first_name[80];
    char last_name[80];

    cout << "Enter your first name: " ;
    cin >> first_name;
    cout << "Enter your last name: " ; 
    cin >> last_name;
    cout << "Here's " << first_name << ", " << last_name << endl;

    string first_name_st;
    string last_name_st;
    
    cout << "Enter your first name: " ;
    cin >> first_name_st;
    cout << "Enter your last name: " ; 
    cin >> last_name_st;
    cout << "Here's " << first_name_st << ", " << last_name_st << endl;

    return 0;
}