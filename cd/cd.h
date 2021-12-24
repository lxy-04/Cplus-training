#ifndef _CD_H_
#define _CD_H_
#include <iostream>

using namespace std;


class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd();
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    virtual ~Cd();
    virtual void Report() const;
    Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
private:
    char *name;
public:
    Classic(char *s1 = "null", char *s2 = "soundsgood", char *s3 = "good", int n = 10, double x = 5.0);
    Classic(const Classic &c);
    virtual void Report() const;
    Classic &operator=(const Classic &c);
    virtual ~Classic();
};






#endif