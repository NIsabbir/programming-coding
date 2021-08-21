#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>0){
          for(int i=1;i<=n;i++)
             cout<<i<<" ";
        cout<<endl;
        }
        else
            cout<<"invalid"<<endl;
    }
}
