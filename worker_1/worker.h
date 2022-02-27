#ifndef _WORKER_H_
#define _WORKER_H_
#include <iostream>
#include <string>

using namespace std;

class Worker
{
private:
    string fullname;
    int id;
public:
    Worker() : fullname("no one"), id(0) {}
    Worker(const string &s, int n) : fullname(s), id(n) {}
    virtual void Set();
    virtual void Show() const;
    virtual ~Worker(){};
};

class Singer : public Worker
{
private:
    int panache;
public:
    Singer() : Worker(), panache(0){}
    Singer(const string &s, int n, int p = 0) : Worker(s, n), panache(p){}
    Singer(Worker &wk, int p = 0) : Worker(wk), panache(p){}
    void Set();
    void Show() const;
    ~Singer(){}
};

class Waiter : public Worker
{
protected:
    enum {other, alto, contralto, soprano, bass, baritone, tenor};
    enum {Vtype = 7};
private:
    static const char *pv[Vtype];
    int voice;
public:
    Waiter() : Worker(), voice(other){}
    Waiter(const string &s, int p, int v = other) : Worker(s, p), voice(v){}
    Waiter(Worker &wk, int v = other) : Worker(wk), voice(v){}
    void Set();
    void Show() const;
    ~Waiter(){}
};









#endif