#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll  r1(ll a)
{
    ll n1=0;
    while(a>0)
    {
        n1=n1*10+(a%10);
        a=a/10;
    }
    return n1;
}
 ll  r2(ll b)
{
    ll n2=0;
    while(b>0)
    {
        n2=n2*10+(b%10);
        b=b/10;
    }
    return n2;
}
int main()
{
    freopen("sa.txt","w",stdout);

     ll t,m,x,y,z=0,d=0,f=0,h,j,g;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        h=r1(x);
        j=r2(y);
        g=h+j;
        //cout<<h<<" "<<j<<" "<<g<<endl;

        ll c=0;
        while(g>0)
        {
            c=c*10+(g%10);
            g=g/10;
        }
        f=c;
        cout<<f<<endl;

    }
}
