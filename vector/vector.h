#ifndef _VECTOR_H_
#define _VECTOR_H_
#include <iostream>

using namespace std;

namespace VECTOR
{
    class Vector
    {
    public:
        enum MODE {POL, RECT};

    private:
        //RECT
        double x;
        double y;
        //POL
        double len;
        double theta;
        MODE mode;
        void set_x();
        void set_y();
        void set_theta();
        void set_len();

    public:
        Vector();
        Vector(double idx1, double idx2, MODE form = RECT);
        void reset(double idx1, double idx2, MODE form = RECT);
        //show
        double     xval() const { return x;     }
        double     yval() const { return y;     }
        double   lenval() const { return len;   }
        double thetaval() const { return theta; }
        //change_mode
        void rect_mode();
        void pol_mode();
        Vector operator+(const Vector &v) const;
        Vector operator-(const Vector &v) const;
        Vector operator-() const;
        Vector operator*(const double rad) const;
        friend Vector operator*(const double rad, const Vector &v);
        friend ostream &operator<<(ostream &os, const Vector &v);
    };
    
}

#endif