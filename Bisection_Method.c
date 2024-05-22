#include<stdio.h>
#include<conio.h>
#include<math.h>

double x,y,z,f;
//The equation is:
//x^3-27=0
//initial values are: x=3 and y=-3
void bisection(double x, double y)
{
    printf("x\t\t\ty\t\t\tz\t\t\tf\n");
    z=(x+y)/2;
   for (int i=0;i<25;i++)
    {
         f=z*z*z-27;
         printf("%lf\t\t%lf\t\t%lf\t\t%lf\n",x,y,z,f);
        if(f<0)

            y=z;
     else
            x=z;
            z=(x+y)/2;
      }
}
int main()
{
  printf("Enter the value of x: ");
  scanf("%lf",&x);
  printf("Enter the value of y: ");
  scanf("%lf",&y);

  bisection(x,y);
  printf("\n\nThe value of the root is: %lf\n ",z);

  return 0;
}
