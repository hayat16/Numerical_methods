#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<double>A;
int main()
{
    double upper_limit,lower_limit,n,h,x,k,sum1,sum2,I,j;
    int i,t;
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
        sum1=0;
        for(i=1; i<=n-1; i++)
        {
            if(i%3!=0)
            {
                sum1=sum1+A[i];
            }
        }
        sum2=0;
        for(i=3; i<=n-1; i++)
        {
            if(i%3==0)
            {
                sum2=sum2+A[i];
            }
        }
        I=(3*h/8)*((A[0]+A[n])+3*sum1+2*sum2);
        cout<<" I : "<<I<<endl;
        A.clear();
    }
    return 0;
}


