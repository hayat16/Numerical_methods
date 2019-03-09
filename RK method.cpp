#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<double>Vx;
    int i,j;
    double x0,y0,h,x,y,ye,m1,m2,m3,m4,x2,y2,x3,y3,x4,y4;
    cout<<"This code is for estimating y(0.4) & function x^2 + y^2 "<<endl;
    cout<<"Enter the value for x0,y0,h : ";
    cin>>x0>>y0>>h;
    Vx.push_back(x0);
    for(x=x0; x<=0.4;)
    {
        x=x+h;
        if(x<=0.4)
        {
            Vx.push_back(x);//storing the value of x in vector Vx
        }
    }
    /*for(i=0;i<Vx.size();i++)
    {
        cout<<Vx[i]<<endl;
    }*/
    x=x0;
    y=y0;
    for(i=0; i<Vx.size()-1; i++)
    {
        m1=pow(x,2)+pow(y,2);

        x2=x+(h/2);
        y2=y+((m1*h)/2);
        m2=pow(x2,2)+ pow(y2,2);

        x3=x+(h/2);
        y3=y+((m2*h)/2);
        m3=pow(x3,2)+ pow(y3,2);

        x4=x+h;
        y4=y+(m3*h);
        m4=pow(x4,2)+ pow(y4,2);

        y=y+((m1+ (2*m2) +(2*m3) +m4)/6)*h;
        x=Vx[i+1];
        cout<<setprecision(1)<<fixed;
        cout<<"y("<<Vx[i+1]<<") : ";
        cout<<setprecision(6)<<fixed;
        cout<<y<<endl;
    }
    Vx.clear();
    return 0;
}


