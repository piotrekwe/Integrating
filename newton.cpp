#include <iostream>
#include <cmath>

using namespace std;


double func(double x)
{
    return log(x);
}

long double simpson(double a, double b,  int n) // całkowanie metodą Simpsona
{
    long double area=0.0;
    const double dx=(b-a)/(n); // dzielimy dx dodatkowo na 2 częsci
    double f_1, f_2, f_3, f_4;
    for(int i=0; i<n; i++)
    {
        f_1=func(a);
        f_2=func(a+dx/3);
        f_3=func(a+2*dx/3);
        f_4=func(a+dx);
        
        area+=3*(f_1 + 3*f_2 + 3*f_3 +f_4)*dx/24;
        a=a+dx;
    }
    return area;
}


int main (void)
{
    int n=2e5;
    cout << "Value: " << simpson(1, 4, n) << " Parts: " << n <<endl;
    return 0;
}
