#ifndef _DMA_H_
#define _DMA_H_
#include <iostream>

using namespace std;

class DmaABC
{
private:
    char *label;
    int rating;
public:
    DmaABC(const char *l = "null", int r = 0);
    DmaABC(const DmaABC &ds);
    DmaABC &operator=(const DmaABC& rs);
    virtual void View() const;
    virtual ~DmaABC();
    friend ostream &operator<<(ostream &os, const DmaABC &ds);
};


class Basedma : public DmaABC
{
public:
    Basedma(const char *l = "null", int r = 0) : DmaABC(l, r){}
    Basedma(const Basedma &rs) : DmaABC(rs){}
    virtual void View() const;
    virtual ~Basedma(){}
};

class Lacksdma : public DmaABC
{
private:
    static const int COL_LEN = 40;
    char color[COL_LEN];
public:
    Lacksdma(const char *c = "blank", const char *l = "null", int r = 0);
    Lacksdma(const char *c, const DmaABC &rs);
    virtual void View() const;
    friend ostream& operator<<(ostream &os, const Lacksdma &rs);
    virtual ~Lacksdma(){}
};

class Hasdma : public DmaABC
{
private:
    char *style;
public:
    Hasdma(const char *s = "none", const char *l = "null", int r = 0);
    Hasdma(const char *s, const DmaABC &rs);
    Hasdma(const Hasdma &hs);
    virtual void View() const;
    Hasdma &operator=(const Hasdma &rs);
    friend ostream &operator<<(ostream &os, const Hasdma &rs);
    virtual ~Hasdma();
};









#endif