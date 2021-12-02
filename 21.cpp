#include <iostream>

using namespace std;

const int SIZE = 5;

template <typename T>
T max5(T *arr1, T *arr2, T *arr3, T *arr4, T *arr5);

int main(void)
{
    double arr1[SIZE] = {1.1, 1.2, 1.3, 1.4, 1.5};
    double arr2[SIZE] = {2.1, 1.2, 1.3, 1.4, 1.5};
    double arr3[SIZE] = {2.1, 1.2, 2.3, 1.4, 1.5};
    double arr4[SIZE] = {1.1, 1.2, 10.3, 1.4, 1.5};
    double arr5[SIZE] = {1.1, 1.2, 1.3, 1.4, 1.5};

    double max = max5(arr1, arr2, arr3, arr4, arr5);
    cout << "max is " << max << endl;
    return 0;
}

template <typename T>
T max5(T *arr1, T *arr2, T *arr3, T *arr4, T *arr5)
{
    T *p_array[5] = {arr1, arr2, arr3, arr4, arr5};
    T max = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (p_array[i][j] > max)
            {
                max = p_array[i][j];
            }
        }
    }
    return max;
    
}
