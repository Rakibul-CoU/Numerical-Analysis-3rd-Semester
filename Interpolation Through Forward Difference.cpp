#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
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

double x[100],y[100],d1[100],d2[100],d3[100],d4[100],d5[100],p;

double fun(void)
{
    double sum;
    sum=y[0]+p*d1[0]+p*(p-1)*d2[0]*(1/2.0)+p*(p-1)*(p-2)*d3[0]*(1/6.0)+p*(p-1)*(p-2)*(p-3)*d4[0]*(1/24.0)+p*(p-1)*(p-2)*(p-3)*(p-4)*d5[0]*(1/120.0);
    return sum;
}

int main()
{
    int i,n;
    double iv,dv;

    cout<<"Enter the number of input set(x & y)[Maximum 6 set]:"<<endl;
    cin>>n;

    cout<<"Enter the value of x & y respectively:"<<endl;
    for(i=0; i<n; i++)
        cin>>x[i]>>y[i];

    for(i=0; i<n-1; i++)
        d1[i]=y[i+1]-y[i];
    for(i=0; i<n-2; i++)
        d2[i]=d1[i+1]-d1[i];
    for(i=0; i<n-3; i++)
        d3[i]=d2[i+1]-d2[i];
    for(i=0; i<n-4; i++)
        d4[i]=d3[i+1]-d3[i];
    for(i=0; i<n-5; i++)
        d5[i]=d4[i+1]-d4[i];

    cout<<"Enter the desired value of x:"<<endl;
    cin>>iv;

    p=(iv-x[0])/abs(x[1]-x[0]);
    dv=fun();

    cout<<"y("<<iv<<")="<<dv<<endl;
    return 0;
}
