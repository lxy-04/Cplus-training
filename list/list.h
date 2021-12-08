#ifndef _LIST_H_
#define _LIST_H_

typedef int Item;

void visit_item(Item &);

class List
{
private:
    static const int SIZE = 5;
    Item item[SIZE];
    int top;
public:
    List();
    bool isempty() const;
    bool isfull() const;
    bool add(const Item num);
    void visit(void (*pf)(Item &));
};

#endif