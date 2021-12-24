#include <iostream>
#include "brass.h"

using namespace std;

int main(void)
{
    Brass Rick("Rick", 123456, 4000);
    Brassplus Jack("Jack", 654321, 3000.00, 200);
    Brassplus li("lixiaoyu");
    li.ViewAcct();
    Rick.ViewAcct();
    cout << endl;
    Jack.ViewAcct();
    cout << endl;

    Jack.Desposit(1000.0);
    cout << Jack.Balance() << endl;
    Rick.Withdraw(4200);
    Jack.Withdraw(4200);
    Jack.ViewAcct();
    
    return 0;
}