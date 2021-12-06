#ifndef _STOCK00_H_
#define _STOCK00_H_

#include <string>

class Stock
{
private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot();
public:
        Stock(const std::string &co, long n, double pr);
        Stock();
        ~Stock();
        const Stock &topvalue(const Stock &s) const;
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show() const;
};

inline void Stock::set_tot()
{
    total_val = shares * share_val;
}



#endif  