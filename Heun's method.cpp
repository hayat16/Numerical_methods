#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<double>Vx;
    int i,j;
    double x0,y0,h,x,y,ye,m1,m2;
    cout<<"This code is for estimating y(2) & function 2*y/x "<<endl;
    cout<<"Enter the value for x0,y0,h : ";
    cin>>x0>>y0>>h;
    Vx.push_back(x0);
    for(x=x0; x<=2.00;)
    {
        x=x+h;
        if(x<=2)
        {
            Vx.push_back(x);//storing the value of x in vector Vx
        }
    }
    y=y0;
    ye=y0;
    for(i=0; i<Vx.size()-1; i++)
    {
        m1=(2*y)/Vx[i];
        ye=y+h*m1;
        m2=(2*ye)/Vx[i+1];
        y=y+(h/2)*(m1+m2);
        cout<<setprecision(2)<<fixed;
        cout<<"y("<<Vx[i+1]<<") : "<<y<<endl;;
    }
    Vx.clear();
    return 0;
}

