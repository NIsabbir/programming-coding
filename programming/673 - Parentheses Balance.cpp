#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
    int i,j,k,t;
    cin>>t;
    getchar();
    while(t--)
    {
        string st;
        stack<char>s;
        getline(cin,st);
        for(i=0;i<st.length();i++)
        {
            if(st[i]=='['||st[i]=='(')
            {
                s.push(st[i]);
            }
            else if(!s.empty() && s.top()=='('&&st[i]==')')
            {
                s.pop();
            }
            else if(!s.empty() && s.top()=='['&&st[i]==']')
            {
                s.pop();
            }

            else
            {
                s.push(st[i]);
            }
        }
        if(s.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
          cout<<"No"<<endl;

    }
}



