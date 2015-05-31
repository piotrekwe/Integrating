#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return x*x;
}

long double trapez(double a, double b, int n) // całkowanie metodą trapezów
{
    const double h = (b-a)/n;
    long double pole=0.0;
    
    for (int i=0; i<n; i++)
    {
        pole += h * ( func(a+i*h) + func(a+(i+1)*h) ) / 2. ;
    }
    return pole;
}


int main ()
{
    int n=90000;
    cout << "Value: " << trapez(0, M_PI, n) << " Parts: " << n << endl;
    return 0;
}

