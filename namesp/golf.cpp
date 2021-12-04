#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    //cout << "name is " << g.fullname << endl;
    g.handicap = hc;
    //cout << "handicap is " << g.handicap << endl;
}

int setgolf(golf &g)
{
    int enter = -1;
    if (g.fullname[0] == '\0')
    {
        enter = 0;
        cout << "Enter the fullname: " ;
        cin.get(g.fullname, Len-1);
        cin.get();
        cout << "Enter the handicap: " ;
        cin >> g.handicap;
        cin.get();
    }else
    {
        enter = 1;
    }
    return enter;
}

void handicap(golf &g, int hc)
{
    int tmp = g.handicap;
    cout << "Reset the value of handicap: " << endl;
    g.handicap = hc;
    cout << tmp << " -> " << g.handicap << endl;
}

void showgolf(const golf &g)
{
    cout << "fullname is " << g.fullname << endl;
    cout << "handicap is " << g.handicap << endl;
}
