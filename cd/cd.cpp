#include <iostream>
#include <cstring>
#include "cd.h"

using namespace std;

Cd::Cd(char *s1, char *s2, int n, double x)
{
    int per_len = strlen(s1);
    int lab_len = strlen(s2);
    performers = new char[per_len + 1];
    label      = new char[lab_len + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d)
{
    int per_len = strlen(d.performers);
    int lab_len = strlen(d.label);
    performers = new char[per_len + 1];
    label      = new char[lab_len + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd()
{
    strcpy(performers, "soundsgood");
    strcpy(label, "good");
    selections = 10;
    playtime = 5.0;
}
void Cd::Report() const
{
    cout << "performers is " << performers << endl;
    cout << "label is      " << label      << endl;
    cout << "selections is " << selections << endl;
    cout << "playtime is   " << playtime   << endl; 
}
Cd &Cd::operator=(const Cd &d)
{
    //check
    if (this == &d)
    {
        return *this;
    }
    //delete
    delete []performers;
    delete []label;
    int per_len = strlen(d.performers);
    int lab_len = strlen(d.label);
    //new space
    performers = new char[per_len + 1];
    label      = new char[lab_len + 1];
    //assignment
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
Cd::~Cd()
{
    delete []performers;
    delete []label;
}
Classic::Classic(char *s1, char *s2, char *s3, int n, double x) : Cd(s2, s3, n, x)
{
    int name_len = strlen(s1);
    name = new char[name_len + 1];
    strcpy(name, s1);
}
void Classic::Report() const
{
    Cd::Report();
    cout << "name is       " << name <<endl;
}
Classic &Classic::operator=(const Classic &c)
{
    if (this ==  &c)
    {
        return *this;
    }
    delete []name;
    Cd::operator=(c);
    int name_len = strlen(c.name + 1);
    name = new char[name_len + 1];
    strcpy(name, c.name);
    return *this;
}
Classic::Classic(const Classic &c) : Cd(c)
{
    int name_len = strlen(c.name + 1);
    name = new char[name_len + 1];
    strcpy(name, c.name);
}
Classic::~Classic()
{
    delete []name;
}



