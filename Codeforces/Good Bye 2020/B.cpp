#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
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
        cin>>n;
        int arr[n];
        int cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]==0)
            {
                mp[arr[i]]++;
                cnt++;
            }
            else if(mp[arr[i]+1]==0)
            {
                mp[arr[i]+1]++;
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}
