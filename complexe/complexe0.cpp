#include "complexe0.h"
#include <cmath>

using namespace std;

namespace COMPLEXE
{
    Complexe::Complexe()
    {
        real = img = 0;
    }
    Complexe::Complexe(const double re, const double im)
    {
        real = re;
        img = im;
    }
    double Complexe::len() const
    {
        return sqrt(real * real + img * img);
    }
    Complexe Complexe::Reset(const double re, const double im)
    {
        return Complexe(re, im);
    }
    Complexe Complexe::operator+(const Complexe &c) const
    {
        return Complexe(real + c.real, img + c.img);
    }
    Complexe Complexe::operator-(const Complexe &c) const
    {
        return Complexe(real - c.real, img - c.img);
    }
    Complexe Complexe::operator*(const Complexe &c) const
    {
        double _real = real * c.real -  img * c.img;
        double _img = real * c.img + img * c.real;
        return Complexe(_real, _img);
    }
    Complexe Complexe::operator*(const double rad) const
    {
        return Complexe(real * rad, img * rad);
    }
    Complexe Complexe::operator~() const
    {
        return Complexe(real, -img);
    }
    Complexe operator*(const double rad, const Complexe &c)
    {
        return c * rad;
    }
    ostream &operator<<(ostream &os, const Complexe &c)
    {
        os << "( " << c.real << ", " << c.img << "i)" << endl;
        return os;
    }
    istream &operator>>(istream &is, Complexe &c)
    {
        cout << "Enter the real: ";
        is >> c.real;
        if (!is.good())
        {
            return is;
        }
        cout << "Enter the img: ";
        is >> c.img;
        return is;
    }
}