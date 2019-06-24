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
int a[10],degree;

double Function(double b)
{
    int i;
    double sum=0,sum1=0,sum2=0;
    for(i=degree;i>=0;i--)
        sum+=a[i]*pow(b,i);
    for(i=degree;i>=1;i--)
        sum1+=a[i]*i*pow(b,i-1);
    sum=b-(sum/sum1);
    return sum;
}

int main()
{
    int i;
    double b,accuracy,value,k,x;
    cout<<"PLEASE, PRESS THE HIGHEST DEGREE OF THE EQUATION: ";
    cin>>degree;
    cout<<endl<<"PLEASE, PRESS THE ELEMENTS: ";
    for(i=degree;i>=0;i--)
        cin>>a[i];
    cout<<endl;
    cout<<"PLEASE, PRESS THE ROOT: ";
    cin>>b;
    cout<<endl<<"PLEASE, PRESS THE ACCURACY LEVEL: ";
    cin>>accuracy;
    value=1/(pow(10,accuracy));
    int loop=0;
    while(1)
    {
        x=Function(b);
        if(abs(1-(k/x))<=value&&loop>0)
            break;
        k=x;
        b=x;
        loop++;
    }
    cout<<endl<<x;
    return 0;
}
