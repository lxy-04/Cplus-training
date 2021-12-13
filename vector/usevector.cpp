#include <iostream>
#include "vector.h"
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace VECTOR;

int main(void)
{
    double dis_to_tar;
    double step_dis;
    int direction;
    int step_num = 0;
    Vector now_position(0.0, 0.0);
    Vector step(0.0, 0.0);
    srand(time(NULL));
    cout << "Enter the distance from target(q to quit): ";
    while (cin >> dis_to_tar)
    {
        cout << "Enter the distance of each step: ";
        cin >> step_dis;
        if (step_dis == 0)
        {
            cout << "Cannot move. " << endl;
            break;
        }
        while (now_position.lenval() < dis_to_tar)
        {
            direction = rand() % 360;
            step.reset(step_dis, direction, Vector::POL);
            //now_position = now_position + step;
            now_position += step;
            ++step_num;
        }
        cout << "Total " << step_num << " steps." << endl;
        cout << now_position;
        now_position.pol_mode();
        cout << now_position;
        cout << endl;
        
        step_num = 0;
        now_position.reset(0.0, 0.0);
        cout << "Enter the distance from target(q to quit): ";
    }
    cout << "bye. " << endl;
    

    return 0;
}