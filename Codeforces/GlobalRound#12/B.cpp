#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x[n],y[n],vis[n];
        int ifPos=1;
       for(int i=0;i<n;i++)
       {
           cin>>x[i]>>y[i];
           vis[i]=0;

       }
       int flag=0;
       int cnt=0;
       for(int i=0;i<n;i++)
       {
           vis[i]=1;

               flag=0;
               for(int j=0;j<n;j++)
               {
                   if(i==j)
                    continue;
                   if(vis[j]==0 && abs(x[i]-x[j])+abs(y[i]-y[j])<=k)
                   {
                       flag=1;
                       vis[j]=1;
                   }
               }
               if(flag)
               {
                   //vis[i]=1;
                   cnt++;
               }
           }
           for(int i=0;i<n;i++)
           {
               if(vis[i]==0)
                cnt=-1;
           }
           cout<<cnt<<"\n";




    }
    return 0;
}
