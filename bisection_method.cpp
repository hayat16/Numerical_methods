#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define E 0.01
double fun(double x)
{
    return (x*x*x-x-1);
}
int main()
{
    double i,j,x0,f0,a,b;
    cin>>a>>b;
    while(fun(a)*fun(b)>0)
    {
        cout<<"OOPS...Ur guess is not correct ..Try once more.."<<endl;
        cin>>a>>b;
    }
    if((b-a)<E)
    {
        cout<<(a+b)/2<<endl;
    }
    else
    {
        while((b-a)>E)
        {
            x0=(a+b)/2;
            f0=fun(x0);
            if(fun(a)*fun(x0)<0)
            {
                b=x0;
            }
            else
            {
                a=x0;
            }
        }
        cout<<x0<<endl;
    }
    return 0;
}


