#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool myfunc(string a,string b)
{
    string x=a+b;

    string y=b+a;

    if(x>y)return true;
    else
     return false;
}
int main()
{
    int n,c,i;
    //vector<string>v1;
    //vector<int>v2;
    //v1.clear();
    string v1[55];
    while(cin>>n)
    {
        if(n==0)break;

        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            //v1.push_back(c);
        }
        sort(v1,v1+n,myfunc);

        for(i=0;i<n;i++)
        {
            cout<<v1[i];
        }
        cout<<endl;
    }
}
