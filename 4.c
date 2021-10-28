#include<stdio.h>

int main(){
    int i =25;
    int *p;
    p = &i;
    *p = 30;
    printf("*p = %d",*p);
    printf("p = %p",p);
    printf("i = %d",i);
    return 0;
}
