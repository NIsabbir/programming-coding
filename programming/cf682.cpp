#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10000],i,j,k,t,n;
    cin>>t;
    while(t--)
    {
        int s=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            s+=n;
            ar[i]=s;
        }
        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}
