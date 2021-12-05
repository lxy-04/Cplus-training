#include <string>
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr)
{
    using std::cout;
    using std::endl;
    company = co;
    if (n < 0)
    {
        cout << "share cannot be negative." << endl;
    }else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
    
}

void Stock::buy(long num, double price)
{
    using std::cout;
    using std::endl;
    if (num < 0)
    {
        cout << "cannot buy negative." << endl;
    }else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::sell(long num, double price)
{
    using std::cout;
    using std::endl;
    if (num < 0)
    {
        cout << "cannot sell negative." << endl;
    }else if (num > shares)
    {
        cout << "cannot sell more than you have." << endl;
    }else
    {
        shares -+ num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::endl;
    using std::cout;
    cout << "company is   " << company << endl;
    cout << "share is     " << shares  << endl;
    cout << "share_val is " << share_val << endl;
    cout << "total_val is " << total_val << endl;
    cout << endl;
}