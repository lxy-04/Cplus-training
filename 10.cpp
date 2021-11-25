#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Car
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;
};


int main(void){

    Car Car1;
    ofstream outFile;
    outFile.open("carinfo.txt");
    ifstream inFile;


    cout << "Enter the make: ";
    cin.getline(Car1.automobile, 50);
    cout << "Enter the year: ";
    cin >> Car1.year;
    cout << "Enter the a_price: ";
    cin >> Car1.a_price;
    Car1.d_price = Car1.a_price * 0.913;

    outFile << "the d_price is : " << Car1.d_price << endl;
    outFile << "the a_price is : " << Car1.a_price << endl;
    outFile << "the year is : " << Car1.year << endl;
    outFile << "the make is : " << Car1.automobile << endl;

    return 0;

}