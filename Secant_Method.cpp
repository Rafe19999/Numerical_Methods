#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define    f(x)    x*x - 4*x - 10
//the equation is: x^2-4x-10=0
// the initial values are: x1=4 and x2=2
using namespace std;

int main()
{
	 float x1, x2, x3, f0, f1, f2, e;
	 int step = 1, N;
   cout<< setprecision(6)<< fixed;

	 /* Inputs */
	 cout<<"Enter x1: ";
	 cin>>x1;
	 cout<<"Enter x2 : ";
	 cin>>x2;
	 e=0.0001;
	 N=10;
	 do
	 {
		  f0 = f(x1);
		  f1 = f(x2);
		  if(f0 == f1)
		  {
			   cout<<"Mathematical Error.";
			   exit(0);
		  }
                      x3 = x2 - (x2 - x1) * f1/(f1-f0);
                        f2 = f(x2);
           cout<<"Iteration-"<< step<<":\t x2 = "<< setw(10)<< x2<<" and f(x2) = "<< setw(10)<< f(x2)<< endl;

		  x1 = x2;
		  f0 = f1;
		  x2 = x3;
		  f1 = f2;

		  step = step + 1;
                       if(step > N)
		  {
			   cout<<"Not Convergent.";
			   exit(0);
		  }
	 }
while(fabs(f2)>e);
            cout<< endl<<"Root is: "<< x2;
	 return 0;
}

