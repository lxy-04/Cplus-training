#ifndef _COMPLEXE0_H_
#define _COMPLEXE0_H_

#include <iostream>

using namespace std;
namespace COMPLEXE
{
    class Complexe
    {
    private:
        double real;
        double img;
        
    public:
        Complexe();
        Complexe(const double re, const double im);
        double len() const;
        Complexe Reset(const double re, const double im);
        Complexe operator+(const Complexe &c) const;
        Complexe operator-(const Complexe &c) const;
        Complexe operator*(const Complexe &c) const;
        Complexe operator*(const double rad) const;
        Complexe operator~() const;
        friend Complexe operator*(const double rad, const Complexe &c);
        friend ostream &operator<<(ostream &os, const Complexe &c);
        friend istream &operator>>(istream &is, Complexe &c);
    };
} // namespace COMPLEXE



#endif
