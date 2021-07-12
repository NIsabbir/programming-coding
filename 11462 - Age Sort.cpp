#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    freopen("sabbir.txt","w",stdout);
    long long int t,n;
    vector<long long int>v;
    while(cin>>t)
    {
        if(t==0)break;
        v.clear();
        for(int i=0;i<t;i++)
        {
            cin>>n;
            v.push_back(n);
        }
        sort(v.begin(),v.end());
        cout<<v[0];
        for(int i=1;i<t;i++)
        {
            cout<<" "<<v[i];
        }
        cout<<endl;
    }
}
