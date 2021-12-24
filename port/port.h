#ifndef _PORT_H_
#define _PORT_H_
#include <iostream>
#include <cstring>

using namespace std;

class Port
{
private:
    static const int STY_LEN = 20;
    char *brand;
    char style[STY_LEN];
    int bottles;
public:
    Port(const char *br = "none", const char *st = "none", int b = 0);
    Port(const Port &p);
    virtual ~Port() { delete []brand; }
    Port &operator=(const Port &p);
    Port &operator+=(int b);
    Port &operator-=(int b);
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream &operator<<(ostream &os, const Port &p);
};

class Vport : public Port
{
private:
    char *nickname;
    int year;
public:
    Vport();
    Vport(const char *br, const char *st, int b, const char *nn, int y);
    Vport(const Vport &vp);
    virtual ~Vport(){ delete []nickname; }
    Vport& operator=(const Vport &vp);
    virtual void Show() const;
    friend ostream &operator<<(ostream &os, const Vport &vp);
    

};








#endif