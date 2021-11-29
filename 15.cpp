#include <iostream>
#include <string>

using namespace std;

typedef double (*p_fun)(const double, const double);

double add(const double x, const double y);
double _plus(const double x, const double y);
double div(const double x, const double y);
double calculate(const double x, const double y, double (*p_cal)(double, double));

int main(void){
    double x, y;
    double q = calculate(2.5, 10.4, add);
    double (*pf[3])(double, double) = {add, _plus, div};

    cout << "Enter x and y: " ;
    while (cin >> x >> y)
    {
        for (int i = 0; i < 3; i++)
        {
            double answer = calculate(x, y, pf[i]);
        }
        cout << "Enter x and y: ";
    }
    

    return 0;
}

double add(const double x, const double y)
{
    cout << "x + y: " << x + y << endl;
    return x + y;
}

double _plus(const double x, const double y)
{
    cout << "x * y: " << x * y << endl;
    return x * y;
}

double div(const double x, const double y)
{
    cout << "x / y: " << x / y << endl;
    return x / y;
}

double calculate(const double x, const double y, p_fun p_cal)
{
    double answer = p_cal(x, y);
    cout << "the answer of x and y is: " << answer << endl;
    return answer;
}