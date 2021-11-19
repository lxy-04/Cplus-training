#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct inflatable
{
    int price;
};

char *getname(void){

    char tmp[80];
    cout << "enter tmp" << endl;
    cin >> tmp;
    char *pn = new char[strlen(tmp) + 1];
    strcpy(pn, tmp);
    return pn;

}

int main(void){

    inflatable s1, s2, s3;
    inflatable *p = &s1;
    inflatable *arp[3] = {&s1, &s2, &s3};
    auto ppb = arp;
    (*(ppb+2)) -> price = 100;
    cout << "s3:" << s3.price << endl;
    return 0;
}