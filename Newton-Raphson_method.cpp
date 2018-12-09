#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define E 0.0001
double fun(double x)
{
    return (x*x-3*x+2);
}
double fun1(double x)
{
    return (2*x-3);
}
int main()
{
    double i=1,x0,x1,x2;
    vector<double>v;
    cout<<"Enter the value for x0 : ";
    cin>>x0;
    v.push_back(x0);
    x1=x0-(fun(x0)/fun1(x0));
    v.push_back(x1);
    while(v[i]-v[i-1]>E)
    {
        x2=x1-(fun(x1)/fun1(x1));
        v.push_back(x2);
        x1=x2;
        i++;
    }
    /*for(int k=0;k<v.size();k++)
    {
        cout<<v[k]<<endl;
    }*/
    cout<<"Root will be : "<<x1;
    return 0;
}
