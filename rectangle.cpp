#include <iostream>
#include<cmath>

using namespace std;

double func(double x)
{
    return sin(x);
}

long double rectangle(double a, double b, int n) // całkowanie metodą prostokatow, midpoint
{
    const double dx = (b-a)/n;
    long double area=0.0;
    double midpoint_value=0;
    for(int i=0; i<n; i++)
    {
        midpoint_value=func(a+dx/2);
        area+=dx*midpoint_value;
        a+=dx;
    }
    return area;
}


int main (void)
{
    int n=10000000;
    cout << "value: " << rectangle(0, M_PI, n) << " Part: " << n << endl;

    return 0;
}
