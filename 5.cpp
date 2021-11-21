#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct CandyBar
{
    string name;
    double weight;
    int cal;
};

int main (void){

    CandyBar* p_snacks = new CandyBar[3];
    p_snacks[1].name = "q";
    p_snacks[1].weight = 20.3;
    p_snacks[1].cal = 100;
    cout << "snacks[1] name is: " << (p_snacks+1)->name << endl;
    delete []p_snacks;

    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "snack name is: " << snack.name << endl;
    cout << "snack weight is: " << snack.weight << endl;
    cout << "snack cal is: " << snack.cal << endl;

    return 0;
}
