#include <stdio.h>
#include <math.h>

// the equation is: x^3-x-2=0
//The initial values are x1=1 and x2=3
double f(double x) {
    return x * x - x - 2;
}
double false_position(double x1, double x2, int iterations)
 {
    double x0;
    for (int i = 1; i <= iterations; i++) {
        x0 = x1 - (f(x1) * (x2 - x1)) / (f(x2) - f(x1));

        printf("Iteration %d:\n", i);
        printf("x0 = %lf, f(x0) = %lf\n", x0, f(x0));

        if (f(x0)*f(x1) < 0)
            x2 = x0;
        else
            x1 = x0;
    }
    return x0;
}
int main()
 {
    double x1, x2;
    printf("Enter the initial guess x1: ");
    scanf("%lf", &x1);
    printf("Enter the initial guess x2: ");
    scanf("%lf", &x2);

    int defaultIterations =12;
    double root = false_position(x1, x2, defaultIterations);
    printf("\n\nThe value of the root is: %lf\n", root);
    return 0;
}

