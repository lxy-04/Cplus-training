#include<iostream>
#include<cstring>
#include<string>

using namespace std;

enum color {red, yellow};

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
    printf("FIRST LETTER IS %d\n", s[1]);
}

int main(){
  
    // int a = 10;
    int b = 20;
    // int a[3] = {3,4,5};
    // int *p = &a;
    // int *p = a;
    // printf("%d\n", *(p+1));
    // int *s = &a;
    // stu stu1;
    // stu *p = &stu1;
    // p->age = 20;
    // p->name = "lixiaoyu";
    // printf("name is %s\n", stu1.name);
    // show(s);
    // swap(&a,&b);
    // printf("a = %d, b = %d\n", a, b);
    char *s[] = {
        "hello",
        "world",
        "lixiaoyu"
    };
    printf("%s\n", s[1]);
    color yesa;
    

    return 0;
}
