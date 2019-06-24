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
float a[10];
int degree;

double Function(double b)
{
    int i;
    double sum1=0;
    for(i=degree;i>=0;i--)
        sum1+=a[i]*pow(b,i);
    return sum1;
}

double Function1(double b)
{
    double sum2=0;
    int i;
    for(i=degree;i>=1;i--)
        sum2+=a[i]*i*pow(b,i-1);
    return sum2;
}

int main()
{
    int i;
    double value,accuracy,m,x0,x1;
    cout<<"PLEASE, PRESS THE HIGHEST DEGREE OF THE EQUATION: ";
    cin>>degree;
    cout<<endl<<"PLEASE, PRESS THE ELEMENTS: ";
    for(i=degree;i>=0;i--)
        cin>>a[i];
    cout<<endl<<"PLEASE, PRESS THE ROOT OF THE EQUATION: ";
    cin>>m;
    cout<<endl<<"PLEASE, PRESS THE ACCURACY LEVEL: ";
    cin>>accuracy;
    value=1/(pow(10,accuracy));
    int p=degree-1;
    while(1)
    {
        x0=m-(p*Function(m))/Function1(m);
        x1=m-((p-1)*Function(m))/Function1(m);
        if(abs(Function(x0))<=value)
        {
            cout<<"THE REQUIRED ROOT IS = "<<x0;
            break;
        }
        if(abs(Function(x1))<=value)
        {
            cout<<"THE REQUIRED ROOT IS = "<<x1;
            break;
        }
        if(Function(x1)>Function(x0))
            m=x0;
        else
            m=x1;
    }
    return 0;
}
