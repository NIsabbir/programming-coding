#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sabbir.txt","w",stdout);
    int t,t1,t2,f,a,c1,c2,c3,m,m2,i=1;
    cin>>t;
    while(t--)
    {
        cin>>t1>>t2>>f>>a>>c1>>c2>>c3;
        m=min(c1,min(c2,c3));
        m2=((c1+c2+c3)-(m))/2;
        int g=t1+t2+f+a+m2;
       // cout<<g<<endl;
        if(g>=90)
        {
            cout<<"Case "<<i<<": A"<<endl;
        }
        if(g<90&&g>=80)
        {
           cout<<"Case "<<i<<":B"<<endl;
        }
        if(g<80&&g>=70)
        {
            cout<<"Case "<<i<<":C"<<endl;
        }
        if(g<70&&g>=60)
        {
           cout<<"Case "<<i<<":D"<<endl;
        }
        if(g<60)
        {
           cout<<"Case "<<i<<":F"<<endl;
        }
        i++;


    }
}
