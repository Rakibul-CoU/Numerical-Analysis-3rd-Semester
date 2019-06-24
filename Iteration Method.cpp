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
using namespace std;

int a[10],degree;

double Function(double b)
{
    int i;
    double sum=0;
    for(i=degree;i>=0;i--)
        sum+=a[i]*pow(b,i);
    return sum;
}

double Derivative(double b)
{
    int i;
    double sum=0;
    for(i=degree;i>=0;i--)
        sum+=a[i]*i*pow(b,i-1);
}

int main()
{
    int i,j,b,c;
    double x0,x1,accuracy,value,k,acc_v;
    cout<<"PLEASE, PRESS THE HIGHEST DEGREE OF THE EQUATION: ";
    cin>>degree;
    cout<<endl<<"PLEASE, PRESS THE ELEMENTS: ";
    for(i=degree;i>=0;i--)
        cin>>a[i];
    cout<<endl<<"PLEASE, PRESS TWO REAL ROOTS: ";
    cin>>b>>c;
    cout<<endl<<"PLEASE, PRESS THE ACCURACY LEVEL: ";
    cin>>accuracy;
    value=1/(pow(10,accuracy));
    k=abs(max(Derivative(b),Derivative(c)));
    acc_v=abs(((1.0-k)/k)*value);
    x0=(b+c)/2.0;
    x1=Function(x0);
    while(abs(x0-x1)>=acc_v)
    {
        x0=x1;
        x1=Function(x0);
    }
    cout<<endl<<x1;
    return 0;
}
