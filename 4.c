#include<stdio.h>
#include<string.h>

int mylen(const char *s){
    int idx = 0;
    while (*(s+idx) != '\0')
    {
        idx++;
    }
    return idx;

}

int main(){
    char *s = "hello";
    printf("length is %d\n", mylen(s));
    
    return 0;
}
