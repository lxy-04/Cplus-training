#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int SIZE = 60;

int main(void){

    char file_name[SIZE];
    ifstream inFile;

    cout << "Enter the name of file: ";
    cin.getline(file_name, SIZE);

    inFile.open(file_name);
    if (!(inFile.is_open()))
    {
        cout << "ERROR!" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "success!" << endl; 
    
    int count = 0;
    double value;
    double sum = 0.0;
    while (inFile >> value)
    {
        ++count;
        sum += value;
    }
    // inFile >> value;
    // while (inFile.good())
    // {
    //     ++count;
    //     sum += value;
    //     inFile >> value;
    // } 

    if (inFile.eof())
    {
        cout << "End of file reached!" << endl;
    }
    else if (inFile.fail())
    {
        cout << "killed by mismatched reason!" << endl;
    }
    else
    {
        cout << "killed by unknown reason!" << endl;
    }
    
    if (count == 0)
    {
        cout << "No vaild data, count is 0!" << endl;
    }
    else
    {
        cout << "sum is: " << sum << endl;
        cout << "average is: " << sum/count << endl;
    }
    
    
    
    
    



    inFile.close();
    return 0;
}