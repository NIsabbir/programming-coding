#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a>>s;
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
}
