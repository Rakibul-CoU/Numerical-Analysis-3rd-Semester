#include<bits/stdc++.h>

using namespace std;

double degree,arr[20],b[20];

double Function(int c)
{
    int i;
    double sum=0;
    for(i=1;i<=3;i++)
    {
        sum+=arr[i]*b[c];
        c--;
    }
    return sum;
}

int main()
{
    int i,n,divider;
    double accuracy,value;
    cout<<"PLEASE, PRESS THE HIGHEST DEGREE OF THE EQUATION: ";
    cin>>degree;
    cout<<endl<<"PLEASE, PRESS THE ELEMENTS: ";
    for(i=degree;i>=0;i--)
        cin>>arr[i];
    cout<<endl<<"PLEASE, PRESS THE ACCURACY LEVEL: ";
    cin>>accuracy;
    value=1/(pow(10,accuracy));
    for(i=0;i<=degree;i++)
    {
        if(arr[i]!=0)
        {
            divider=i;
            break;
        }
    }
    int v=1,j=3;
    double k;
    k=arr[divider];
    double before,now;
    for(i=divider+1;i<=degree;i++)
        arr[i]=(-1*arr[i])/k;
    b[1]=1;
    b[2]=arr[1];
    b[3]=arr[1]*b[2]+arr[2]*b[1];
    before=b[1]/b[2];
    now=b[2]/b[3];
    while(abs(now-before)>=value)
    {
        before=now;
        b[j+1]=Function(j);
        now=b[j]/b[j+1];
        j=j+1;
    }
    cout<<endl<<now;
    return 0;
}
