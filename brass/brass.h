#ifndef _BRASS_H_
#define _BRASS_H_
#include <iostream>
#include <string>
using namespace std;


class Brass
{
private:
    string fullname;
    int acctNum;
    double balance;
public:
    Brass(const string &s = "Nullboby", int an = -1, double bal = 0.0);
    void Desposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    Brass operator+(const Brass &b) const;

};

class Brassplus : public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:

    Brassplus(const string &s = "Nullboby", int an = -1, double bal = 0.0, double ml = 500.0, double r = 0.11125);
    Brassplus(const Brass &ba, double ml = 500.0, double r = 0.11125);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r){ rate = r; }
    void ResetOwes() { owesBank = 0.0; }

};



#endif