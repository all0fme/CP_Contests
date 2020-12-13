#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
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
            if(mp[arr[i]]==1)
            {
                flag=1;
                if(arr[i]<el){el=arr[i];ind=i+1;}
            }

        }
        if(flag)
        cout<<ind<<"\n";
        else cout<<"-1\n";



    }
}
