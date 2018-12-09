#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define E  0.0001
double fun(double x)
{
    return (x*x-x-2);
}
int main()
{
    double i,j,x0,f0,a,b,k,f1,f2;
    cin>>a>>b;
    while(fun(a)*fun(b)>0)
    {
        cout<<"OOPS...Ur guess is not correct ..Try once more.."<<endl;
        cin>>a>>b;
    }
    f1=fun(a);
    f2=fun(b);
    k=(b-a)/b;
    if(k<E)
    {
       x0=(a-(f1*(b-a))/(f2-f1));
        cout<<x0<<endl;
    }
    else
    {
        while(k>E)
        {
           x0=(a-(f1*(b-a))/(f2-f1));
            cout<<a<<"  "<<b<<endl;
            f0=fun(x0);
            if(fun(a)*fun(x0)<0)
            {
                b=x0;
            }
            else
            {
                a=x0;
            }
            k=(b-a)/b;
        }
        cout<<"The root of the equation="<<x0<<endl;
    }
    return 0;
}



