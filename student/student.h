#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

using namespace std;
typedef valarray<double> arraydb;

class Student : private string, private valarray<double>
{
public:
    explicit Student() : string("null name"), arraydb() {}
    explicit Student(const string &n, const arraydb &sc) : string(n), arraydb(sc) {}
    explicit Student(const string &n) : string(n), arraydb() {}
    explicit Student(int n) : string("nully"), arraydb(n) {}
    explicit Student(const char *str, const double *pd, int n) : string(str), arraydb(pd, n) {}
    ~Student() {};
    double Average() const;
    const string &Name() const;
    double &operator[](int i) { return ((arraydb &)(*this))[i]; }
    double operator[](int i) const { return arraydb::operator[](i); }
    friend ostream& operator<<(ostream &os, const Student& st);
    friend istream& operator>>(istream &is, Student& st);
    friend istream& getline(istream &is, Student &st);
};





#endif