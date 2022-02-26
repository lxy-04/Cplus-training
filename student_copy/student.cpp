#include "student.h"
#include <iostream>
#include <string>
#include <valarray>

using namespace std;

double Student::Average() const
{
    if (scores.size() > 0)
    {
        return scores.sum() / scores.size();
    }
    else
    {
        return 0;
    }
}
const string &Student::Name() const
{
    return name;
}
ostream& operator<<(ostream &os, const Student& st)
{
    os << st.name << "'s scores: " << endl;
    os << (const string&)st << endl;
    if (st.scores.size() > 0)
    {
        int i;
        for (i = 0; i < st.scores.size(); i++)
        {
            os << st.scores[i] << " ";
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
    is >> st.name;
    return is;
}
istream& getline(istream &is, Student &st)
{
    getline(is, st.name);
    return is;
}
