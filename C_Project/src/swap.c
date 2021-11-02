#include "swap.h"

void swap(int *a, int *b){
    int idx = *a;
    *a = *b;
    *b = idx;
}
