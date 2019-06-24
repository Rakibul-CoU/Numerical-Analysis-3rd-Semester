#include<bits/stdc++.h>

using namespace std;

int a[10],degree;

double Function(double b)
{
    int i;
    double sum=0;
    for(i=degree;i>=0;i--)
    {
        sum=sum+(a[i]*(pow(b,i)));
    }
    return sum;
}

int main()
{

    double j,k,b,c,mean,temp;
    int i;
    cout<<"PRESS THE HIGHEST DEGREE OF THE EQUATION: ";
    cin>>degree;
    cout<<endl<<endl;
    cout<<"PRESS THE CO-EFFICIENT OF THE EQUATION: ";
    for(i=degree;i>=0;i--)
    {
        cin>>a[i];
    }
    cout<<endl<<"PLEASE PRESS THE TWO ROOTS: ";
    cin>>b>>c;

    while(Function(b)*Function(c)>0)
    {
        cout<<"SORRY SIR, THE ROOTS U PRESSED IS WRONG, PLEASE TRY AGAIN.."<<endl;
        cin>>b>>c;
    }

    if(Function(b)>0)
    {
        temp=b;
        b=c;
        c=temp;
    }

    cout<<endl<<"PLEASE, PRESS THE ACCURACY LEVEL: ";
    double accuracy,x;
    cin>>accuracy;
    double value=1/(pow(10,accuracy));
    do
    {
        x=(b+c)/2;
        if(Function(x)==0)
            break;
        else if(Function(x)<0)
            b=x;
        else
            c=x;
    }
    while(abs(b-c)>value);
    cout<<endl<<x;
    return 0;
}
