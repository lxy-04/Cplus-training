#include<stdio.h>
#include<string.h>
typedef struct stu_
{
    int age;
    char *name;
} stu;

/**
*@brief 交换函数
*@param a 交换参数a指针
*@param b 交换参数b指针
*/
void swap(int *a, int *b){
    int idx = *a;
    *a = *b;
    *b = idx;
}


void show(const int *s){
    printf("*s = %d\n ", *s);
}

int main(){
  
    int a = 10;
    int b = 20;
    int *s = &a;
    stu stu1;
    stu *p = &stu1;
    p->age = 20;
    p->name = "lixiaoyu";
    printf("name is %s\n", stu1.name);
    show(s);
    swap(&a,&b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
