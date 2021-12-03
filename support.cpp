#include "support.h"

using namespace std;

void update(double dt)
{
    warming += dt;
    cout << "global warming is " << warming << " now." << endl;
}

void local(void)
{
    double warming = 0.8;
    cout << "Local warming is " << warming << endl;
    cout << "But global warming is " << ::warming << endl;
}