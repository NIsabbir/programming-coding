#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
    int t,n,m,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string s;
        queue<int>left;
        queue<int>right;
        for(int i=0;i<m;i++)
        {
        cin>>l>>s;
        if(s=="left")
            left.push(l);
        else
            right.push(l);
        }

        int e=n*100;
        int sum=0,c=0;

        while(1)
        {
            while(!left.empty() && sum+left.front()<e)
            {
                sum+=left.front();
                cout<<"L"<<sum<<endl;
                left.pop();
            }
            c++;
            sum=0;
            if(left.empty() && right.empty())break;

            while(!right.empty() &&sum+right.front()<e)
            {
                sum+=right.front();
                cout<<"R"<<sum<<endl;
                right.pop();
            }
            c++;
            sum=0;
            if(left.empty() && right.empty())break;
        }
        cout<<c<<endl;


    }
}
