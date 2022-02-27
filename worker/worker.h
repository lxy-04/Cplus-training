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
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Worker() : fullname("no one"), id(0) {}
    Worker(const string &s, int n) : fullname(s), id(n) {}
    virtual void Set() = 0;
    virtual void Show() const = 0;
    virtual ~Worker(){};
};

class Singer : virtual public Worker
{
private:
    int panache;
protected:
    void Data() const;
    void Get();
public:
    Singer() : Worker(), panache(0){}
    Singer(const string &s, int n, int p = 0) : Worker(s, n), panache(p){}
    Singer(Worker &wk, int p = 0) : Worker(wk), panache(p){}
    void Set();
    void Show() const;
    ~Singer(){}
};

class Waiter : virtual public Worker
{
protected:
    enum {other, alto, contralto, soprano, bass, baritone, tenor};
    enum {Vtype = 7};
    void Data() const;
    void Get();
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

class Singingwaiter : public Singer, public Waiter
{
protected:
    void Data() const {}
    void Get(){}
public:
    Singingwaiter(){}
    Singingwaiter(Worker &wk, int p = 0, int v = other) : Worker(wk), Singer(wk, p), Waiter(wk, v){}
    Singingwaiter(const string &s, int n, int p = 0, int v = other) : Worker(s, n), Singer(s, n, p), Waiter(s, n, v){}
    Singingwaiter(Singer &sk, int v = other) : Worker(sk), Singer(sk), Waiter(sk, v){}
    Singingwaiter(Waiter &wk, int p = 0) : Worker(wk), Singer(wk, p), Waiter(wk){}
    void Set();
    void Show() const;
    ~Singingwaiter(){}
};











#endif