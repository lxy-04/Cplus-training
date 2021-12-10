#ifndef _TIME_H_
#define _TIME_H_

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(const int h, const int m = 0);
    void AddHr(const int h);
    void AddMin(const int m);
    void Reset(const int h = 0, const int m = 0);
    Time operator+(const Time& t) const;
    Time operator-(const Time& t) const;
    Time operator*(const double rad) const;
    void Show() const;
};



#endif