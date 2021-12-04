#include <iostream>
#include <cstring>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

char buffer[200];

void Set(chaff *p_chaff, const char *s, int slag);
void show(chaff *p_chaff);


int main(void)
{
    chaff *p_chaff = new chaff[2];
    chaff *pb_chaff = new(buffer) chaff[2];

    Set(p_chaff, "lixiaoyu", 100);
    Set(p_chaff+1, "sunziyan", 200);
    Set(pb_chaff, "xiaosun", 120);
    Set(pb_chaff+1, "xiaoli", 220);
    for (int i = 0; i < 2; i++)
    {
        show(p_chaff + i);
        show(pb_chaff + i);
    }
    
    delete []p_chaff;
    return 0;
}

void Set(chaff *p_chaff, const char *s, int slag)
{
    strcpy(p_chaff->dross, s);
    p_chaff->slag = slag; 
}

void show(chaff *p_chaff)
{
    cout << "chaff dross is " << p_chaff->dross << endl;
    cout << "chaff slag is " << p_chaff->slag << endl;
}