#include <iostream>
#include <cstring>
#include <cctype>
#include "stringgood.h"

using namespace std;

int STRINGGOOD::stringgood::stringgood_num = 0;

namespace STRINGGOOD
{
    stringgood::stringgood()
    {
        len = 1;
        str = new char[1];
        str[0] = '\0';
        ++stringgood_num;
        cout << stringgood_num << " strings left.1" << endl;

    }
    stringgood::stringgood(const char *s)
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
        ++stringgood_num;
        cout << stringgood_num << " strings left.2" << endl;

    }
    stringgood::stringgood(const stringgood &s)
    { 
        len = s.len;
        str = new char[len + 1];
        strcpy(str, s.str);
        ++stringgood_num;
        cout << stringgood_num << " strings left.3" << endl;

    }
    stringgood::~stringgood()
    {
        delete []str;
        --stringgood_num;
        cout << stringgood_num << " strings left." << endl;
    }
    stringgood& stringgood::operator=(const stringgood& s)
    {
        if (this == &s)
        {
            return *this;
        }
        delete []str;
        len = s.len;
        str = new char[len + 1];
        strcpy(str, s.str);
        return *this;
    }
    stringgood& stringgood::operator=(const char *s)
    {
        delete []str;
        len = strlen(s);
        str = new char[len+1];
        strcpy(str, s);
        return *this;
    }
    stringgood stringgood::operator+(const stringgood& s)
    {
        int merge_len = len + s.len + 1;
        char *p = new char[merge_len];
        strncpy(p, str, len);
        strcpy(p + len, s.str);
        return stringgood(p);
    }
    stringgood& stringgood::stringlow()
    {
        for (int i = 0; i < len; i++)
        {
            str[i] = tolower(str[i]);    
        }
        return *this;
    }
    stringgood& stringgood::stringup()
    {
        for (int i = 0; i < len; i++)
        {
            str[i] = toupper(str[i]);    
        }
        return *this;
    }
    int stringgood::char_num(char c) const
    {
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == c)
            {
               ++count;
            }
        }
        return count;
    }
    char &stringgood::operator[](int i)
    {
        return str[i];
    }
    const char&stringgood::operator[](int i) const
    {
        return str[i];
    }
    bool operator<(const stringgood &s1, const stringgood &s2)
    {
        return (strcmp(s1.str, s2.str) < 0);
    }
    bool operator>(const stringgood &s1, const stringgood &s2)
    {
        return (s2 < s1);
    }
    bool operator==(const stringgood &s1, const stringgood &s2)
    {
        return (strcmp(s1.str, s2.str) == 0);
    }
    istream &operator>>(istream &is, stringgood &s)
    {
        char tmp[stringgood::SIZE];
        is.get(tmp, stringgood::SIZE);
        if (is)
        {
            s = tmp;
        }
        while (is && is.get() != '\n')
        {
            continue;
        }
        return is;
    }
    ostream &operator<<(ostream &os, const stringgood &s)
    {
        os << s.str;
        return os;
    }
}
