#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       int n= s.length();
       int vis[n];
       for(int i=0;i<n;i++)
        vis[i]=0;
       int cnt=0;
       int i=0;
       int op1=0;
       int op2=0;
       while(i<n)
       {
           if(vis[i]==1)
            {i++;
       continue;}
           else vis[i]=1;
           op1=0,op2=0;
           if(i+1<n)
           {
               if(s[i]==s[i+1] )
                {cnt++;
                op1=1;
                vis[i+1]=1;}
           }
           if(i+2<n)
           {
               if(s[i]==s[i+2] )
               {
                   cnt++;
                   op2=1;
                   vis[i+2]=1;
               }
           }
       i++;

       }
       cout<<cnt<<"\n";
    }
}
