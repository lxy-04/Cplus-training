#include <iostream>
#include <cstring>
#include "port.h"

using namespace std;

Port::Port(const char *br, const char *st, int b)
{
    int br_len = strlen(br);
    brand = new char[br_len + 1];
    strcpy(brand, br);
    strncpy(style, st, STY_LEN - 1);
    bottles = b;
}
Port::Port(const Port &p)
{
    int br_len = strlen(p.brand);
    brand = new char[br_len + 1];
    strcpy(brand, p.brand);
    strncpy(style, p.style, STY_LEN - 1);
    bottles = p.bottles;
}
Port &Port::operator=(const Port &p)
{
    if (this == &p)
    {
        return *this;
    }
    delete []brand;
    int br_len = strlen(p.brand);
    brand = new char[br_len + 1];
    strcpy(brand, p.brand);
    strncpy(style, p.style, STY_LEN - 1);
    bottles = p.bottles;
    return *this;
}
Port &Port::operator+=(int b)
{
    bottles += b;
    return *this;
}
Port &Port::operator-=(int b)
{
    if (b > bottles)
    {
        cout << "more than we have. " << endl;
        return *this;
    }
    bottles -= b;
    return *this;
}
void Port::Show() const
{
    cout << "Brand: " << brand   << endl;
    cout << "Kind:  " << style   << endl;
    cout << "Bottle:" << bottles << endl;

}
ostream &operator<<(ostream &os, const Port &p)
{
    os << p.brand << " , " << p.style << " , " << p.bottles;
    return os;
}
Vport::Vport() : Port()
{
    int nick_len = strlen("none");
    nickname = new char[nick_len + 1];
    strcpy(nickname, "none");
    year = 0;
}
Vport::Vport(const char *br, const char *st, int b, const char *nn, int y) : Port(br, st, b)
{
    int nn_len = strlen(nn);
    nickname = new char[nn_len + 1];
    strcpy(nickname, nn);
    year = y;
}
Vport::Vport(const Vport &vp) : Port(vp)
{
    int nn_len = strlen(vp.nickname);
    nickname = new char[nn_len + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}
Vport& Vport::operator=(const Vport &vp)
{
    if (this == &vp)
    {
        return *this;
    }
    Port::operator=(vp);
    delete []nickname;
    int nn_len = strlen(vp.nickname);
    nickname = new char[nn_len + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}
void Vport::Show() const
{
    Port::Show();
    cout << "nickname is " << nickname << endl;
}
ostream &operator<<(ostream &os, const Vport &vp)
{
    os << (const Port &)vp << " , " << vp.nickname << " , " << vp.year;
    return os;
}