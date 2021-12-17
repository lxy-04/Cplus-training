#ifndef _STRINGGOOD_H_
#define _STRINGGOOD_H_
#include <iostream>
#include <cstring>

using namespace std;
namespace STRINGGOOD
{
    class stringgood
    {
    private:
        char *str;
        int len;
        static int stringgood_num;
        static const int SIZE = 80;
    public:
        stringgood();
        stringgood(const char *s);
        stringgood(const stringgood& s);
        ~stringgood();
        int length() const{return len;}
        const char& operator[](int i) const;
        char &operator[](int i);
        friend bool operator<(const stringgood &s1, const stringgood &s2);
        friend bool operator>(const stringgood &s1, const stringgood &s2);
        friend bool operator==(const stringgood &s1, const stringgood &s2);
        friend istream &operator>>(istream &is, stringgood &s);
        friend ostream &operator<<(ostream &os, const stringgood &s);
        stringgood &operator=(const char *s);
        stringgood &operator=(const stringgood &s);
        static int howmany(){return stringgood_num;}
    };
    
}


#endif