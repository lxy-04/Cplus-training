#include "student.h"
#include <iostream>
#include <string>
#include <valarray>

using namespace std;

double Student::Average() const
{
    if (arraydb::size() > 0)
    {
        return arraydb::sum() / arraydb::size();
    }
    else
    {
        return 0;
    }
}
const string &Student::Name() const
{
    return (const string &) *this;
}
ostream& operator<<(ostream &os, const Student& st)
{
    os << (const string &)st << "'s scores: " << endl;
    if (((const arraydb &)st).size() > 0)
    {
        int i;
        for (i = 0; i < ((const arraydb &)st).size(); i++)
        {
            os << ((const arraydb &)st).operator[](i) << " ";
            if (i % 5 == 4)
            {
                os << endl;
            }  
        }
        if (i % 5 != 4)
        {
            os << endl;
        }
    }else
    {
        os << "Empty scores." << endl;
    }
    return os;
}
istream& operator>>(istream &is, Student& st)
{
    is >> (string &)st;
    return is;
}
istream& getline(istream &is, Student &st)
{
    getline(is, (string &)st);
    return is;
}
