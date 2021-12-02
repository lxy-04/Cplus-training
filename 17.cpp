#include <iostream>

using namespace std;

struct debts
{
    string name;
    double amount;
};

template <typename T>
void Showarray (T *array, T size);

template <typename T>
void Showarray (T *array[], int size);

int main(void){

    double things[6] = {0, 2, 3, 45, 7, 6};
    Showarray<double>(things, 6);

    struct debts mr_E[3] = {
        {"Rick", 2400.0},
        {"Jack", 1300.0},
        {"Rose", 1800.0}
    };
    double *pd[3] = {NULL, NULL, NULL};
    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    
    Showarray(pd, 3);

    return 0;
}

template <typename T>
void Showarray (T *array, T size)
{
    cout << "template A" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}

template <typename T>
void Showarray (T *array[], int size)
{
    cout << "template A" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *array[i] << ' ';
    }
    cout << endl;
}

//template <> void Showarray<debts> (debts) 