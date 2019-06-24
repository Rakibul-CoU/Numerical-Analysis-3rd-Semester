#include<bits/stdc++.h>

using namespace std;

int degree,a[10];


double Function(double b)
{
    double sum=0;
    int i;
    for(i=degree;i>=0;i--)
    {
        sum+=a[i]*pow(b,i);
    }
    return sum;
}
int main()
{
    int i,j,n;
    double sum=0,c,b,accuracy,value,x,temp;
    cout<<"PRESS THE HIGHEST DEGREE OF THE EQUATION: ";
    cin>>degree;
    cout<<endl<<"PRESS THE ELEMENTS: ";
    for(i=degree;i>=0;i--)
        cin>>a[i];
    cout<<endl;
    cout<<"PRESS THE TWO ROOTS OF THE EQUATION: ";
    cin>>b>>c;
    cout<<endl;
    while(Function(b)*Function(c)>0)
    {
        cout<<"SORRY SIR, YOU PRESSED WRONG ROOTS, PLEASE TRY AGAIN"<<endl;
        cin>>b>>c;
    }
    if(Function(b)>0)
    {
        temp=b;
        b=c;
        c=temp;
    }
    cout<<"PRESS THE ACCURACY LEVEL: ";
    cin>>accuracy;
    value=1/(pow(10,accuracy));
    do
    {
        x=((b*Function(c))-(c*Function(b)))/(Function(c)-Function(b));
        c=b;
        b=x;
    }
    while(abs(b-c)>value);
    cout<<endl<<x<<endl;
    return 0;
}
