#include <iostream>
#include <string>

using namespace std;

struct donate
{
    string name;
    double money;
};


int main(void){

    int per_num = 0;
    int Grand_num = 0;
    cout << "Enter the number of person:" << endl;
    cin >> per_num;
    donate *all_per = new donate[per_num];
    for (int i = 0; i < per_num; i++)
    {
        cout << "Enter person#" << i + 1 << " name: ";
        cin >> all_per[i].name;
        cout << "Enter person#" << i + 1  << " money: ";
        cin >> all_per[i].money;              
    }
    cout << "the table of Grand Patrons:" << endl;
    for (int i = 0; i < per_num; i++)
    {
        if (all_per[i].money > 10000)
        {
            cout << all_per[i].name << " " << all_per[i].money << endl;
            ++Grand_num;
        }
    }
    if (Grand_num == 0)
    {
        cout << "none" << endl;
    }
    cout << "the table of Patrons" << endl;
    if (Grand_num == per_num)
    {
        cout << "none" << endl;
    }
    else
    {
        for (int i = 0; i < per_num; i++)
        {
            if (all_per[i].money <= 10000)
            {
                cout << all_per[i].name << " " << all_per[i].money << endl;
                ++Grand_num;
            }
        }
    }
    delete[] all_per;
    return 0;
}