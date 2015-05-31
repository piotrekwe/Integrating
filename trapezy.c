#include <math.h>
#include <stdio.h>

double func(double x)
{
    return 5*sin(x);
}

double trapez(double a, double b, int n) // całkowanie metodą trapezów
{
    const double h = (b-a)/n;
    double pole=0.0;
    
    for (int i=0; i<n; i++)
    {
        pole += h * ( func(a+i*h) + func(a+(i+1)*h) ) / 2. ;
    }
    return pole;
}


int main ()
{
    int n=100;
    printf("%f %d \n", trapez(0, M_PI, n),n);
    return 0;
}

