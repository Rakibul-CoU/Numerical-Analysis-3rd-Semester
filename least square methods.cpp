#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,i;
    cout<<"PRESS THE NUMBER OF ELEMENTS DO U WANT TO ENTER: ";
    cin>>m;
    cout<<endl;
    double x=0,y=0,x2=0,xy=0,a,b,determinant,a0,a1;
    cout<<"THE ELEMENTS ARE: "<<endl;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        x=x+a;
        y=y+b;
        x2=x2+ceil(pow(a,2));
        xy=xy+(a*b);
    }
    cout<<endl<<"SO THE EWO EQUATIONS ARE: "<<endl<<endl;
    cout<<"EQUATION NUMBER 1: "<<m<<"a0 + "<<x<<"a1 = "<<y<<endl;
    cout<<"EQUATION NUMBER 2: "<<x<<"a0 + "<<x2<<"a1 = "<<xy<<endl;
    ///HERE IS THE PART OF CALCULATING A0 AND A1...
    determinant=(m*x2)-(x*x);
    a0=((x2*y)-(x*xy))/determinant;
    a1=((m*xy)-(x*y))/determinant;
    cout<<endl<<"THE VALUE OF a0 = "<<a0<<endl;
    cout<<"THE VALUE OF a1 = "<<a1<<endl;
    return 0;
}
