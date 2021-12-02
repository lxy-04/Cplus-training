#include <iostream>
#include <string>

using namespace std;

const int SIZE = 40;

struct CandyBar
{
    char name[SIZE];
    double weight;
    int cal;
};

void Set(CandyBar &candy, const char *name = "MM", const double weight = 2.85, const int cal = 350);
void Show(const CandyBar &candy);

int main(void)
{
    CandyBar Candy;
    Set(Candy);
    Show(Candy);

    return 0;
}

void Set(CandyBar &candy, const char *name, const double weight, const int cal)
{
    candy.cal = cal;
    candy.weight = weight;
    int i = 0;
    for (i; name[i] != '\0'; i++)
    {
        candy.name[i] = name[i]; 
    }
    for (i; i < SIZE; i++)
    {
        candy.name[i] = '\0';
    }
}

void Show(const CandyBar &candy)
{
    cout << candy.name    << endl;
    cout << "weight is " << candy.weight << endl;
    cout << "cal is "    << candy.cal << endl;
}