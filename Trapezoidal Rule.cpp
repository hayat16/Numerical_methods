#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<double>A;
int main()
{
    double upper_limit,lower_limit,n,h,x,k,sum,I;
    int i,j,t;
    cout<<"This code is only for x/(1+x) function "<<endl;
    cout<<"Test Case : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the value of lower limit : ";
        cin>>lower_limit;
        cout<<"Enter the value of upper limit : ";
        cin>>upper_limit;
        cout<<"Enter the value of n : ";
        cin>>n;
        h=(upper_limit-lower_limit)/n;
        cout<<endl;
        for(i=0; i<=n; i++)
        {
            x=i*h;
            k=x/(1+x);//y=f(x)
            A.push_back(k);
        }
        cout<<"Value for the y=f(x)"<<endl;
        for(i=0; i<=n; i++)
        {
            cout<<A[i]<<"   ";

        }
        cout<<endl<<endl;
        sum=0;
        for(i=1; i<=n-1; i++)
        {
            sum=sum+A[i];
        }
        I=h/2*((A[0]+A[n])+2*sum);
        cout<<" I : "<<I<<endl;
        A.clear();
    }
    return 0;
}
