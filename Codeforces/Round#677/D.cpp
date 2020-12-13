#include<bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       ll arr[n];
       int flag=1;
       for(int i=0;i<n;i++)cin>>arr[i];
       for(int i=0;i<n-1;i++)
       {
           if(arr[i+1]!=arr[i]){
            flag=0;
            break;
           }


       }
       if(flag)
       {
           cout<<"NO\n";
           continue;
       }
       cout<<"YES\n";
       int res[n]={0};

        int cnt=0;
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(arr[i] !=arr[j] && (res[i]==0 ||res[j]==0 ))
               {
                   cout<<i+1<<" "<<j+1<<"\n";
                   res[i]++;
                   res[j]++;
                   cnt++;
               }
               if(cnt==(n-1))
                break;
           }
           if(cnt==(n-1))
                break;
       }

    }
}
