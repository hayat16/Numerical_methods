#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>A[100];
vector<int>B[100];
vector<int>AT[100];
vector<int>AdjA[100];
vector<int>R[100];
vector<int>Final[100];
vector<int>v;
int main()
{
    long long int m,n,x,i,j,r,c,sum,sum1,sum2,sum3,sum4,p,q,a,t,cnt;
    cin>>t;
    while(t--)
    {
        cout<<"Enter the value of row & column for matrix A : ";
        cin>>m>>n;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>x;
                A[i].push_back(x);
            }
        }
        cout<<"Enter the value of row & column for matrix B : ";
        cin>>r>>c;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cin>>x;
                B[i].push_back(x);
            }
        }
        /* for(i=0;i<r;i++)
         {
             for(j=0;j<c;j++)
             {
                 cout<<B[i][j]<<" ";
             }
             cout<<endl;
         }*/
        i=0;
        for(j=0; j<n; j++)
        {
            if(j==0)
            {
                sum1=A[i][j]*((A[i+1][j+1]*A[i+2][j+2])-(A[i+2][j+1]*A[i+1][j+2]));
                //cout<<sum1<<endl;
            }
            if(j==1)
            {
                sum2=-(A[i][j])*((A[i+1][j-1]*A[i+2][j+1])-(A[i+2][j-1]*A[i+1][j+1]));
                //cout<<sum2<<endl;
            }
            if(j==2)
            {
                sum3=A[i][j]*((A[i+1][j-2]*A[i+2][j-1])-(A[i+2][j-2]*A[i+1][j-1]));
                //cout<<sum3<<endl;
            }
        }
        sum=sum1+sum2+sum3;
        // cout<<sum<<endl;
        if(sum!=0)
        {
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    AT[i].push_back(A[j][i]);
                }
            }
            cout<<endl<<"Transpose Matrix : "<<endl;
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    cout<<AT[i][j]<<" ";
                }
                cout<<endl;
            }
            for(p=0; p<m; p++)
            {
                for(q=0; q<n; q++)
                {
                    int l[]= {0,1,2};
                    int k[]= {0,1,2};
                    for(i=0; i<m; i++)
                    {
                        for(j=0; j<n; j++)
                        {
                            if(l[i]!=p && k[j]!=q)
                            {
                                v.push_back(AT[l[i]][k[j]]);
                            }
                        }
                    }
                    a=(v[0]*v[3])-(v[2]*v[1]);
                    if((p+q)%2==0)
                    {
                        AdjA[p].push_back(a);
                    }
                    else
                    {
                        AdjA[p].push_back(a*(-1));
                    }
                    //cout<<v[0]<<v[1]<<v[2]<<v[3]<<endl;
                    v.clear();

                }
            }
            cout<<endl<<"Adjoint Matrix : "<<endl;
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    cout<<AdjA[i][j]<<" ";
                }
                cout<<endl;
            }
            for(i=0; i<m; i++)
            {
                sum4=0;
                for(j=0; j<n; j++)

                {
                    sum4=sum4+AdjA[i][j]*B[j][c-1];
                    //cout<<sum4<<endl;
                }
                R[i].push_back(sum4);
            }
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {
                    Final[i].push_back(R[i][j]/sum);
                }

            }
            cout<<"Final Matrix X : "<<endl;
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {
                    cout<<Final[i][j]<<" ";
                }
                cout<<endl;
            }
            cnt=0;
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {
                    if(cnt==0)
                    {
                        cout<<"x = "<<Final[i][j]<<endl;
                    }
                    if(cnt==1)
                    {
                        cout<<"y = "<<Final[i][j]<<endl;
                    }
                    if(cnt==2)
                    {
                        cout<<"z = "<<Final[i][j]<<endl;
                    }
                }
                cnt++;
            }
        }
        else
        {
            cout<<"Finding inverse matrix is impossible ."<<endl;
        }
        for(i=0; i<=100; i++)
        {
            A[i].clear();
            B[i].clear();
            AT[i].clear();
            AdjA[i].clear();
            R[i].clear();
            Final[i].clear();
        }
        v.clear();
    }
    return 0;
}
