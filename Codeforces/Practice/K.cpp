#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int vis[5001];
int flag=0;
int num=0;
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
       int len=s.length();
       for(int i=0;i<=len;i++)
       {
           vis[i]=0;
       }
       int x=0,y=0;
       for(int i=0;i<len;i++)
       {
           if(vis[i]==0){
                flag=0;
           for(int j=i+1;j<len;j++)
           {
               if(vis[j]==0)
               {
                   if(s[i]=='R' && s[j]=='L')
                   {
                       vis[i]=1;
                       vis[j]=1;
                       flag=1;
                   }
                   if(s[i]=='L' && s[j]=='R')
                   {
                       vis[i]=1;
                       vis[j]=1;
                        flag=1;
                   }
                   if(s[i]=='U' && s[j]=='D')
                   {
                       vis[i]=1;
                       vis[j]=1;
                        flag=1;
                   }
                    if(s[i]=='D' && s[j]=='U')
                   {
                       vis[i]=1;
                       vis[j]=1;
                        flag=1;
                   }
                   if(flag)
                    break;
               }
           }
           if(flag)
            continue;
           else{
            num=i;
            break;}
           }

       }
       cout<<"num is "<<num<<"\n";
       if(len>1 && num==0)
       {
           cout<<"0 0\n";
           continue;
       }
       for(int i=0;i<=num;i++)
       {
           if(s[i]=='R')
           {
               x++;
           }
           if(s[i]=='L')
            x--;
           if(s[i]=='U')
            y++;
           if(s[i]=='D')
            y--;
       }
       cout<<x<<" "<<y<<"\n";

   }
}

