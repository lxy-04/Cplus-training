#include <iostream>
#include "list.h"

using namespace std;

int main(void)
{
    List list;
    List list2;
    Item num;
    for (int i = 0; i < 3; i++)
    {
        cout << "add items" << endl;
        cin >> num;
        list.add(num);
        list.visit(visit_item);
    }
    list2 = list;
    list2.visit(visit_item);
    
    return 0;
}