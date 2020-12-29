#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll k,flag=0;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        ll low=arr[0];
        ll high=arr[0];
        for(int i=1;i<n;i++)
        {
            low=max(low-(k-1),arr[i]);
            high=min(high+k-1,arr[i]+k-1);
            if(low>high)
            {
                flag=1;
                break;
            }
        }
       if(!flag)
       {
           if(low>arr[n-1]|| high<arr[n-1])
            flag=1;
       }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }



}
