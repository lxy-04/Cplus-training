#include <iostream>

using namespace std;

void show(const char*[]);
int main(void)
{
    char *array[3] = {
        "lixiaoyu",
        "lixiaoyu123",
        "lixiaoyu1234"
    };
    show(array);
    return 0;
}

void show(const char* array[])
{
    cout << array[0] << endl;
}