/**
    Bismillahir Rahmanir Rahim
    Md. Rakibul Islam
    Dept. of CSE, CoU
**/
#include<bits/stdc++.h>
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
using namespace std;
double a[10];
int degree;

double Function(double b)
{
    double sum=0;
    for(int i=degree;i>=0;i--)
        sum+=a[i]*pow(b,i);
    return sum;
}

int main()
{
    double sum,x1,x0,x2,temp,accuracy,value;
    cout<<"PLEASE, PRESS THE HIGHEST DEGREE OF THE EQUATION: ";
    cin>>degree;
    cout<<endl;
    cout<<"PLEASE, PRESS THE ELEMENTS: ";
    for(int i=degree;i>=0;i--)
        cin>>a[i];
    cout<<endl;
    cout<<"PLEASE, PRESS TWO ROOTS: ";
    cin>>x0>>x1;
    if(Function(x0)*Function(x1)>0)
    {
        cout<<"SORRY SIR, YOU PRESSED WRONG ROOTS, PLEASE TRY AGAIN...";
        cin>>x0>>x1;
    }
    if(Function(x0)>0)
    {
        temp=x0;
        x0=x1;
        x1=temp;
    }
    cout<<endl<<"PLEASE, PRESS THE ACCURACY LEVEL: ";
    cin>>accuracy;
    cout<<endl;
    value=1/(pow(10,accuracy));
    do
    {
        x2=((x0*Function(x1))-(x1*Function(x0)))/(Function(x1)-Function(x0));
        x0=x1;
        x1=x2;
    }
    while(abs(x1-x0)>value);
    cout<<x2;
    return 0;
}
