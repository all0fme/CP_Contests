#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=0;
        int arr[n];
        int brr[m];
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){cin>>arr[i];mp[arr[i]]++;}
        for(int i=0;i<m;i++){cin>>brr[i];if(mp[brr[i]]==1)ans++;
        else
            mp[brr[i]]++;
        }
        cout<<ans<<"\n";

    }
    return 0;
}
