#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
   freopen("sa.txt","w",stdout);
    int n ,i,j,g,f;
    while(cin>>n)
    {
        if(n==0)break;

        queue<int>q;

        for(i=1;i<=n;i++)
        {
            q.push(i);
        }
        j=0;
        cout<<"Discarded cards:";

        while(q.size()!=1)
        {
            if(j==1)cout<<",";
            j=1;

            f=q.front();
            cout<<" "<<f;
            q.pop();
             g=q.front();
            q.pop();
            q.push(g);
        }
        cout<<endl;
        cout<<"Remaining card: "<<q.front()<<endl;

    }


}
