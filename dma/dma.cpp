#include "dma.h"
#include <iostream>
#include <cstring>

using namespace std;

DmaABC::DmaABC(const char *l, int r)
{
    int lab_len = strlen(l);
    label = new char[lab_len + 1];
    strcpy(label, l);
    rating = r;
}
DmaABC::DmaABC(const DmaABC &rs)
{
    int lab_len = strlen(rs.label);
    label = new char[lab_len + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}
DmaABC& DmaABC::operator=(const DmaABC &rs)
{
    if (this == &rs)
    {
        return *this;
    }
    delete []label;
    int lab_len = strlen(rs.label);
    label = new char[lab_len + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}
ostream& operator<<(ostream &os, const DmaABC& rs)
{
    os << "label  is " << rs.label  << endl;
    os << "rating is " << rs.rating << endl;
    return os;
}
DmaABC::~DmaABC()
{
    delete []label;
}
void DmaABC::View() const
{
    cout << "this is DmaABC view funcation. " << endl;
    cout << (*this) << endl;
}

void Basedma::View() const
{
    cout << "this is Basedma view funcation. " << endl;
    DmaABC::View();
}

Lacksdma::Lacksdma(const char *c, const char *l, int r) : DmaABC(l, r)
{
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}
Lacksdma::Lacksdma(const char *c, const DmaABC &rs) : DmaABC(rs)
{
    strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}
ostream& operator<<(ostream &os, const Lacksdma& rs)
{
    os << (const DmaABC &)rs;
    os << "color  is " << rs.color << endl;
    return os;
}
void Lacksdma::View() const
{
    cout << "this is Basedma view funcation. " << endl;
    cout << (*this) << endl;
}

Hasdma::Hasdma(const char *s, const char *l, int r) : DmaABC(l, r)
{
    int style_len = strlen(s);
    style = new char[style_len + 1];
    strcpy(style, s);
}
Hasdma::Hasdma(const char *s, const DmaABC &rs) : DmaABC(rs)
{
    int style_len = strlen(s);
    style = new char[style_len + 1];
    strcpy(style, s);
}
Hasdma::Hasdma(const Hasdma &hs) : DmaABC(hs)
{
    int style_len = strlen(hs.style);
    style = new char[style_len + 1];
    strcpy(style, hs.style);
}
Hasdma& Hasdma::operator=(const Hasdma &rs)
{
    if (this == &rs)
    {
        return *this;
    }
    DmaABC::operator=(rs);
    delete []style;
    int style_len = strlen(rs.style);
    style = new char[style_len + 1];
    strcpy(style, rs.style);
    return *this;
}
Hasdma::~Hasdma()
{
    delete []style;
}
ostream &operator<<(ostream &os, const Hasdma &rs)
{
    os << (const DmaABC &)rs;
    os << "style  is " << rs.style << endl;
    return os;
}
void Hasdma::View() const
{
    cout << "this is Basedma view funcation. " << endl;
    cout << (*this) << endl;
}
