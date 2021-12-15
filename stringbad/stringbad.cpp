#include <iostream>
#include <cstring>
#include "stringbad.h"

using namespace std;

int STRINGBAD::stringbad::stringbad_num = 0;

namespace STRINGBAD
{
    stringbad::stringbad()
    {
        len = 4;
        str = new char[4];
        strcpy(str, "C++");
        ++stringbad_num;
    }
    stringbad::~stringbad()
    {
        delete []str;
        --stringbad_num;
        cout << stringbad_num << " strings left." << endl;
    }
    stringbad::stringbad(const char *s)
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
        ++stringbad_num;
    }
    stringbad::stringbad(const stringbad &s)
    { 
        len = s.len;
        str = new char[len + 1];
        strcpy(str, s.str);
        ++stringbad_num;
    }
    stringbad& stringbad::operator=(const stringbad& s)
    {
        if (this == &s)
        {
            return *this;
        }
        delete []str;
        len = s.len;
        str = new char[len + 1];
        strcpy(str, s.str);
        ++stringbad_num;
        return *this;
    }
    ostream &operator<<(ostream &os, const stringbad &s)
    {
        os << s.str;
        return os;
    }
}
