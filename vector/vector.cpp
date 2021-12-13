#include "vector.h"
#include <cmath>

using namespace std;

namespace VECTOR
{
    const double rad_to_deg = 45 / atan(1.0);
    void Vector::set_x()
    {
        x = len * cos(theta);
    }
    void Vector::set_y()
    {
        y = len * sin(theta);
    }
    void Vector::set_theta()
    {
        if (x == 0.0 && y == 0.0)
        {
            theta = 0.0;
        }else
        {
            theta = atan2(y, x);
        } 
    }
    void Vector::set_len()
    {
        len = sqrt(x * x + y * y);
    }
    Vector::Vector()
    {
        len = theta = x = y = 0;
        mode = RECT;
    }
    /**
     * @brief 
     * @param idx1 mode=RECT, x; mode = POL, len
     * @param idx2 mode=RECT, y; mode = POL, theta(degree)
     */
    Vector::Vector(double idx1, double idx2, MODE form)
    {
        mode = form;
        if (mode == Vector::POL)
        {
            len = idx1;
            theta = idx2 / rad_to_deg;
            set_x();
            set_y();
        }else if(mode == Vector::RECT)
        {
            x = idx1;
            y = idx2;
            set_len();
            set_theta();
        }else
        {
            cout << "ERROR INIT!" << endl;
            len = theta = x = y = 0;
            mode = RECT;
        }
    }
    void Vector::reset(double idx1, double idx2, MODE form)
    {
        mode = form;
        if (mode == Vector::POL)
        {
            len = idx1;
            theta = idx2 / rad_to_deg;
            set_x();
            set_y();
        }else if(mode == Vector::RECT)
        {
            x = idx1;
            y = idx2;
            set_len();
            set_theta();
        }else
        {
            cout << "ERROR INIT!" << endl;
            len = theta = x = y = 0;
            mode = RECT;
        }
    }

    //change_mode
    void Vector::rect_mode()
    {
        mode = Vector::RECT;
    }
    void Vector::pol_mode()
    {
        mode = Vector::POL;
    }
    Vector Vector::operator+(const Vector &v) const
    {
        return Vector(x + v.x, y + v.y);
    }
    Vector Vector::operator-(const Vector &v) const
    {
        return Vector(x - v.x, y - v.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    Vector Vector::operator*(const double rad) const
    {
        return Vector(rad * x, rad * y);
    }
    Vector operator*(const double rad, const Vector &v)
    {
        //return Vector(rad * v.x, rad * v.y);
        return v * rad;
    }
    ostream &operator<<(ostream &os, const Vector &v)
    {
        if (v.mode == Vector::RECT)
        {
           os << "x is " << v.x << " y is " << v.y << endl;
        }else if (v.mode == Vector::POL)
        {
            os << "len is " << v.len << " theta is " << v.theta << endl;
        }else
        {
            os << "ERROR OUTPUT!" << endl;
        }
        return os;
    }
}