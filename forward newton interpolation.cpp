#include<bits/stdc++.h>

using namespace std;

double x[10],y[10],d[10][10],degree,m;

double p;

int factorial(int n)
{
    int i,mul=1;
    for(i=1;i<=n;i++)
        mul*=i;
    return mul;
}

double calculation(void)
{
    int i;
    double sum=y[0];
    double mul=p,div=p;
    for(i=0;i<m-1;i++)
    {
        sum+=(mul*d[i+1][0])/factorial(i+1);
        div=div-1;
        mul*=div;
    }
    return sum;
}

int main()
{
    int i,j;
    cout<<"ENTER THE TOTAL NUMBER OF SETS: ";
    cin>>m;
    cout<<endl<<"ENTER THE VALUE OF X AND Y: ";
    for(i=0;i<m;i++){
        cin>>x[i]>>y[i];
        d[0][i]=y[i];
    }
    cout<<endl;
    for(i=1;i<m;i++)
    {
        for(j=0;j<m-i;j++)
        {
            d[i][j]=d[i-1][j+1]-d[i-1][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-i;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    int x1;
    cout<<endl<<"PRESS THE DESIRED VALUE OF X: ";
    cin>>x1;
    p=(x1-x[0])/(1.0*(x[1]-x[0]));
    double ans=calculation();
    cout<<endl<<ans;
    return 0;
}
