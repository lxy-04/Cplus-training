#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void){

    /*
    double *p3 = new double [3];
    p3[0] = 0.1;
    p3[1] = 0.2;
    p3[2] = 0.3;
    cout << "p3[1] = " << p3[1] << endl;
    */
    char bird[10];
    char* bird2 = NULL;
    cin >> bird;
    cout << "bird is " << bird << endl;

    bird2 = new char[strlen(bird) + 1];
    strcpy(bird2, bird);
    cout << "bird2 is " << bird2 << endl;
    delete []bird2;
    

    return 0;
}