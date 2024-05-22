#include<bits/stdc++.h>
#define f1(x,y,z)  (5-x2-x3)/2
#define f2(x,y,z)  (15-3*x1- 2*x3)/5
#define f3(x,y,z)  (8-2*x1-x2)/4
using namespace std;
int main()
{



 float a=0, b=0, c=0, x1, x2, x3;
    int n=20;
    cout<< setprecision(1)<< fixed; //doshomik er pore koy ghor asbe setar jonno
    cout<< endl<<"Count\tx1\t\tx2\t\tx3"<< endl;
    for(int i=1;i<=n;i++)
    {
        x1 = f1(a,b,c);
        x2 = f2(x1,b,c);
        x3 = f3(x1,y1,c);
        cout<<i<<"\t"<< x1<<"\t\t"<< x2<<"\t\t"<< x3<<endl;
        a = x1;
        b = x2;
        c = x3;
    }
    cout<< endl<<"Ans: x1 = "<< x1<<", x2 = "<< x2<<" and x3 = "<< x3;
    return 0;
}

