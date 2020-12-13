#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans;
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,int> mp;
        int minel=INT_MAX;
        int el=INT_MAX;
        int ind=-1;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;

        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]<minel)
            {
                minel=mp[arr[i]];

            }

        }
        if(minel==n)
        {
            cout<<"0\n";
            continue;
        }
        if(mp[arr[0]]==minel && arr[0]==arr[n-1])
        {
            ans=minel+1-2;
        }
        else if(mp[arr[0]]==minel || mp[arr[n-1]]==minel)
        {
            ans=minel
;        }
        else{
            ans=minel+1;
        }
        if(arr[0]==arr[n-1] )
        {
            ans=min(ans,mp[arr[0]]-1);
        }

            ans=min(ans,min(mp[arr[0]],mp[arr[1]]));

          cout<<ans<<"\n";

    }
}
