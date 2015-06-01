#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return x*x;
}

long double gauss(double a, double b, int n) // całkowanie metodą trapezów
{
    long double area=0.0;
    const double dx=(b-a)/n;
    const double A_1=(double)5/9,A_2=(double)8/9, A_3=(double)5/9;
    
    
    return area;
    
}


int main ()
{
    int n=90000;
    cout << "Value: " << gauss(0, M_PI, n) << " Parts: " << n << endl;
    return 0;
}
