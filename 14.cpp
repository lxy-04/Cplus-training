#include <iostream>
#include <string>

using namespace std;

const int SIZE = 4;

int Fill_array(double *array, int size);
void Show_array(double *array, int size);
void Reverse_array(double *array, int size);
 

int main(void){

    double array[SIZE];
    int array_size = 0;
    array_size = Fill_array(array, SIZE);
    Show_array(array, SIZE);
    Reverse_array(array, SIZE);
    cout << "After Reversing array is: " << endl;
    Show_array(array, SIZE);
    return 0;
}

int Fill_array(double *array, int size){

    int count = 0;
    cout << "Enter the " << count+1 << " number: " ;
    while (cin >> array[count])
    {
        ++count;
        if (count == size)
        {
            break;
        }
        cout << "Enter the " << count+1 << " number: ";
    }
    cout << "total enter " << count << " numbers" << endl;
    return count;

}

void Show_array(double *array, int size){

    for (int i = 0; i < size; i++)
    {
        cout << i << " number in array is " << array[i] << endl;
    }
    
}

void Reverse_array(double *array, int size){

    double tmp;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }
    
}