#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10000],b[1000];
    long long int i, n,r;
    vector<int>v;
    cout<<"Enter the value for n : ";
    cin>>n;
    cout<<"Enter the value for Root : ";
    cin>>r;
    cout<<"Enter the value of coefficients  : ";
    for(i=n; i>=0; i--)
    {
        cin>>a[i];
    }
    b[n]=0;
    for(i=n; i>0; i--)
    {
        b[i-1]=a[i]+(r*b[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        cout<<"b["<<i<<"]="<<b[i]<<endl;
    }
    cout<<endl;
    cout<<b[n-1]<<" x^"<<n-1<<" ";
    for(i=n-2; i>=0; i--)
    {
        if(b[i]<0)
        {
            cout<<b[i];
            if(i!=0)
            {
                cout<<" x^"<<i;
            }
        }
        else
        {
            cout<<" + "<<b[i];
            if(i!=0)
            {
                cout<<" x^"<<i;
            }
        }
    }
    cout<<" =0 ";
    return 0;
}
