#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int a,b,t;

    while(scanf("%d",&t)==1){
        stack<int> s;
        queue<int> q;
        priority_queue<int>p;

        int i=1,j=1,k=1;
    while(t--)
    {
        cin>>a>>b;
        if(a==1)
        {
            if(i==       1)
            {
                s.push(b);
            }
            if(j==1){
                    q.push(b);
            }
            if(k==1)
            {p.push(b);
            }
        }
        else if(a==2)
        {
            if(i==1)
            {
              if(!s.empty()&&s.top()==b)
              {
                //cout<<s.top()<<endl;
                 s.pop();

              }
              else
              {
                  i=0;
              }
            }
            if(j==1)
            {
              if(!q.empty()&&q.front()==b)
              {
                  q.pop();
              }
              else
              {
                  j=0;
              }
            }
            if(k==1)
            {
              if(!p.empty()&&p.top()==b)
              {
                  p.pop();
              }
              else
              {
                  k=0;
              }
            }
        }
    }
   // cout<<"i:"<<i<<"j:"<<j<<"k:"<<k<<endl;
    if(i==1&&j!=1&&k!=1)
    {
        cout<<"stack"<<endl;

    }
    else if(i!=1 &&k!=1&&j==1)
        {
            cout<<"queue"<<endl;
              }
    else if(i!=1&&k==1&&j!=1)
    {
            cout<<"priority queue"<<endl;
    }
    else if(i==1||j==1||k==1)
        {
            cout<<"not sure"<<endl;
        }
    else
    {
        cout<<"impossible"<<endl;
    }



    }
    return 0;
}

