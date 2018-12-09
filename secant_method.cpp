#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define E 0.00001
double f(double x)
{
    return (x*x-4*x-10);
}
int main()
{
    double i=1,x0,x1,x2,f1,f2,x3;
    cout<<"Enter the value for x1 & x2 : ";
    cin>>x1>>x2;
    x3=(x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

        while(abs(x3-x2)>E)
        {
           x1=x2;
           f1=f(x2);
           x2=x3;
           f2=f(x3);
           cout<<x1<<" "<<x2<<endl;
           x3=(x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

        }
        cout<<"x3 : "<<x3<<endl;

    return 0;
}

