#include <iostream>
#include "time.h"

using namespace std;

Time::Time()
{
    hours = minutes = 0;
}
Time::Time(const int h, const int m)
{
    hours = h;
    minutes = m;
}
void Time::AddHr(const int h)
{
    hours += h;
}
void Time::AddMin(const int m)
{
    minutes += m;
    hours = hours + minutes/60;
    minutes %= 60;
}
void Time::Reset(const int h, const int m)
{
    hours = h;
    minutes = m;
}
void Time::Show() const
{
    cout << "hours is " << hours << endl;
    cout << "minutes is " << minutes << endl;
}
Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}
Time Time::operator-(const Time &t) const
{
    Time result;
    if (hours < t.hours || (hours == t.hours && minutes < t.minutes))
    {
        cout << "minus unsuccessful. " << endl;
        return result;
    }else
    {
        result.minutes = minutes - t.minutes;
        if (result.minutes < 0)
        {
            result.hours = hours - t.hours - 1;
            result.minutes += 60;
        }else
        {
            result.hours = hours - t.hours;
            result.minutes = minutes - t.minutes;
        }
        return result;
    }
}
Time Time::operator*(const double rad) const
{
    Time result;
    result.minutes = hours * rad * 60 + minutes * rad;
    result.hours = result.minutes / 60;
    result.minutes %= 60;
    return result;
}