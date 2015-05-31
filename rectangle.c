#include <math.h>
#include <stdio.h>

double func(double x)
{
    return sin(x);
}



double rectangle(double a, double b, int n) // całkowanie metodą prostokatow, midpoint
{
    const double dx = (b-a)/n;
    double area=0.0;
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
    int n=100;
    printf("value: %f devided into: %d \n", rectangle( 0, M_PI, n), n);
    
    return 0;
}
