#include <iostream>
//304

using namespace std;

template<typename T>
T maxn(const T *array, int size);

template <> char* maxn(char * const array[], int size);

int main(void)
{
    char *s[3] = {
        "xiaoyu23",
        "ziyan",
        "shuxueasds"
    };
    double array[3] = {5.3, 7.21, 90.12};
    char *max = maxn(s, 3);
    double int_max = maxn(array, 3);
    cout << "max is " << max << endl;
    return 0;
}

template<typename T>
T maxn(const T *array, int size)
{
    T max = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        } 
    }
    cout << "max is " << max << endl;
    return max;
}

template <> char* maxn(char * const array[], int size)
{
    int max = 0;
    int max_array_num = 0;
    for (int i = 0; i < size; i++)
    {
        int array_size = 0;
        for (int j = 0; array[i][j] != '\0'; j++)
        {
            ++array_size;
        }
        if (array_size > max)
        {
            max = array_size;
            max_array_num = i;
        }
    }
    return array[max_array_num];
}