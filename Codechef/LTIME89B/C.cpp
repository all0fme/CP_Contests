
#include<bits/stdc++.h>
#define ll long long
//#define loop(i,n) for(int i=0;i<n;i++)
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
        ll sum[n];
        ll curr_sum=0;
        ll or_var=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            //or_var=or_var|arr[i];
            curr_sum=curr_sum+arr[i];
            sum[i]=curr_sum;
        }

        ll ans;
        for(int i=0;i<n-1;i++)
        {
            sum[n-1]=sum[n-1]|sum[i];
        }
        for(int i=0;i<n;i++)
        {
            sum[n-1]=sum[n-1]|arr[i];
        }
        cout<<sum[n-1]<<"\n";

    }
}
