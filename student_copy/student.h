#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>
#include <valarray>

using namespace std;
typedef valarray<double> arraydb;

class Student
{
private:
    string name;
    arraydb scores;
public:
    explicit Student() : name("null name"), scores() {}
    explicit Student(const string &n, const arraydb &sc) : name(n), scores(sc) {}
    explicit Student(const string &n) : name(n), scores() {}
    explicit Student(int n) : name("nully"), scores(n) {}
    explicit Student(const char *str, const double *pd, int n) : name(str), scores(pd, n) {}
    ~Student() {};
    double Average() const;
    const string &Name() const;
    double &operator[](int i) { return scores[i]; }
    double operator[](int i) const { return scores[i]; }
    friend ostream& operator<<(ostream &os, const Student& st);
    friend istream& operator>>(istream &is, Student& st);
    friend istream& getline(istream &is, Student &st);
};





#endif