#include <iostream>
#include "support.h"

using namespace std;

double warming = 0.3;

void show(char* const []);

int main(void)
{
    // char * const array[3] = {
    //     "lixiaoyu",
    //     "lixiaoyu123",
    //     "lixiaoyu1234"
    // };
    //show(array);
    cout << "global warming is " << warming << " degrees." << endl;
    update(0.1);
    local();
    return 0;
}

void show(char* const *array)
{
    cout << array[0] << endl;
}