#include <stdio.h>
#include <math.h>
// The equation is: x^2-3x+2=0 and the initial value is x=0
double f(double x)
{
 return x * x - 3*x +2;
}
double df(double x)
{
    return 2 * x-3;
}
int main()
{
    double x=0;
    double check=1.00;
    for (int iter = 0; iter < 1000; iter++)
    {
        double x0 = f(x);
        double dx0 = df(x);
        double delta = x0 / dx0;
        x =x-delta;
printf("Iteration %d: x = %lf, f(x) = %lf\n", iter, x, x0);
  if (check ==x)
        {
           printf(" The root is: x = %lf\n", x);
            break;
        }
    }
 return 0;
}
