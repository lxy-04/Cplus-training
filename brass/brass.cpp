#include "brass.h"

Brass::Brass(const string &s, int an, double bal)
{
    fullname = s;
    acctNum = an;
    balance = bal;
}
void Brass::Desposit(double amt)
{
    if (amt < 0)
    {
        cout << "negative. " << endl;
    }else
    {
        balance += amt;
    }
    
    
}
void Brass::Withdraw(double amt)
{
    if (amt < 0)
    {
        cout << "withdraw must be positive" << endl;
    }else if (amt <= balance)
    {
        balance -= amt;
    }else
    {
        cout << "withdraw exceeded" << endl;
    }
    
}
double Brass::Balance() const
{
    return balance;
}
void Brass::ViewAcct() const
{
    cout << fullname << " " << acctNum << " " << balance << endl;
}
Brass Brass::operator+(const Brass &b) const{

    return Brass(fullname, (acctNum + b.acctNum), 0);
}
Brassplus::Brassplus(const string &s, int an, double bal, double ml, double r) : Brass(s, an, bal)
{
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}
Brassplus::Brassplus(const Brass &ba, double ml, double r) : Brass(ba)
{
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}
void Brassplus::ViewAcct() const
{
    Brass::ViewAcct();
    cout << maxLoan << " " << rate << " " << owesBank << endl;
}
void Brassplus::Withdraw(double amt)
{
    double bal = Balance();
    if (amt <= bal)
    {
        Brass::Withdraw(amt);
    }else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank = advance * (1.0 + rate);
        cout << "advance : " << advance << endl;
        cout << "charge : " << advance * rate << endl;
        Desposit(advance);
        Brass::Withdraw(amt);
    }else
    {
        cout << "cannot" << endl;
    }
    
}
