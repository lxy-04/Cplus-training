#include <iostream>
#include <string>
#include <valarray>
#include "student.h"

using namespace std;

const int pupils = 3;
const int quizzes = 5;

void set(Student& s, int n);
int main()
{
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
    int i;
    for (i = 0; i < pupils; i++)
    {
        set(ada[i], quizzes);
    }
    for (i = 0; i < pupils; i++)
    {
        cout << ada[i];
    }
    
    
    return 0;
}
void set(Student& s, int n)
{
    cout << "Enter the name. " << endl;
    getline(cin, s);
    cout << "Enter the scores. " << endl;
    for (int i = 0; i < quizzes; i++)
    {
        cin >> s[i];
    }
    while(cin.get() != '\n');
}