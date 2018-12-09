#include<bits/stdc++.h>
#include<iostream>
long long int A[1000];
using namespace std;
int main()
{
    vector<int>v;
    long long int i,t,p,n,x;
    cout<<"test Case : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the value of n : ";
        cin>>n;
        cout<<"Enter the value of x : ";
        cin>>x;

        for(int i=0; i<=n; i++)
        {
            cin>>A[i];
        }
        p=A[0];
        for(i=1; i<=n; i++)
        {
            p=p*x+A[i];
        }
        memset(A, 0, sizeof A);
        cout<<"Value of polynomial is : "<<p<<endl;
    }
    return 0;
}

