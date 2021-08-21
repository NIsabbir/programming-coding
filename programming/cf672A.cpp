#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,x,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        a=(n/x);
        b=round(a);
        cout<<b<<endl;
        cout<<b+1<<endl;
    }

}
