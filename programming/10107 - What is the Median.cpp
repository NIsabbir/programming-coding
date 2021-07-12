#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,i=0,k,a,b,c,d;
    vector<int>v;
    while(scanf("%d",&n)!=EOF)
    {

        v.push_back(n);
        sort(v.begin(),v.end());
        if((i+1)%2==1)
        {
           k=i/2;
           cout<<v[k]<<endl;
        }
        else
        {
           b=i/2;
           c=b+1;
           a=(v[b]+v[c])/2;
           cout<<a<<endl;
        }
        i++;
       /* for(int j=0;j<v.size();j++)
        {
            cout<<v[j]<<endl;
        }
        */
    }


}
