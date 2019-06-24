#include<bits/stdc++.h>

using namespace std;

double x[20],y[20],d[10][10],p;

int m;

int factorial(int n)
{
    int mul=1,i;
    for(i=1;i<=n;i++)
        mul*=i;
    return mul;
}

double calculation(void)
{
    int i;
    double sum=y[m-1],mul=p,div=p;
    for(i=1;i<m;i++)
    {
        sum+=(mul*d[i][m-i-1])/factorial(i);
        div++;
        mul=mul*div;
    }
    return sum;
}

int main()
{
    int i,j;
    double x1;
    cout<<"PRESS THE NUMBER OF SETS: ";
    cin>>m;
    cout<<"PRESS THE VALUE OF X AND Y: "<<endl;
    for(i=0;i<m;i++)
    {
        cin>>x[i]>>y[i];
        d[0][i]=y[i];
    }
    for(i=1;i<m;i++)
    {
        for(j=0;j<m-i;j++)
        {
            d[i][j]=d[i-1][j+1]-d[i-1][j];
        }
    }
    cout<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-i;j++)
            cout<<d[i][j]<<" ";
        cout<<endl;
    }
    cout<<"PRESS THE VALUE OF X: ";
    cin>>x1;
    p=(x1-x[m-1])/abs(1.0*(x[1]-x[0]));
    double ans=calculation();
    cout<<endl<<ans;
    return 0;
}
