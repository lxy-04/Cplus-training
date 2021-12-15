#ifndef _STRINGBAD_H_
#define _STRINGBAD_H_
#include <iostream>
#include <cstring>

using namespace std;
namespace STRINGBAD
{
    class stringbad
    {
    private:
        char *str;
        int len;
        static int stringbad_num;

    public:
        stringbad();
        stringbad(const char *s);
        stringbad(const stringbad& s);
        ~stringbad();
        friend ostream &operator<<(ostream &os, const stringbad &s);
        stringbad &operator=(const stringbad &s);
    };
    
}


#endif