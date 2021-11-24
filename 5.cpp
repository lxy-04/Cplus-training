#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Car
{
    string prod_name;
    int prod_year;
};

void prod_name_get(Car* p_car, int car_num){
        cout << "Enter the make: ";
        getline(cin, p_car[car_num].prod_name);
};

void prod_year_get(Car* p_car, int car_num){
        cout << "Enter the year made: ";
        cin >> p_car[car_num].prod_year;
        cin.get();
};
/**
*@brief 显示函数
*@param p_car 汽车动态数组指针
*@param car_num 汽车数量
*/
void print(Car* p_car, int car_num){
    for (int i = 0; i < car_num; i++)
    {
        cout << p_car[i].prod_year << " " << p_car[i].prod_name << endl;
    }
}

int main (void){

    int car_num;
    cout << "Enter the number of car: ";
    cin >> car_num;
    cin.get();
    Car *p_car = new Car[car_num];

    for (int i = 0; i < car_num; i++)
    {
        cout << "car #" << i << endl;
        prod_name_get(p_car, i);
        prod_year_get(p_car, i);
    }
    print(p_car, car_num);

    delete []p_car;

    return 0;
}
