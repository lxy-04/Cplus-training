#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>

using namespace std;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person();
    Person(const string &ln, const char *fn = "Heyyou");
    void show() const;
    void FormalShow() const;

};





#endif