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
        for(int i=0;i<n;i++)cin>>arr[i];
        int ind=-1;
        ll mxnum=-1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                if(arr[i]>mxnum)
                {
                    mxnum=arr[i];
                    ind=i+1;
                }
            }
        }
        for(int i=n-1;i>0;i--)
        {
            if(arr[i-1]<arr[i])
            {
                if(arr[i]>mxnum)
                {
                    mxnum=arr[i];
                    ind=i+1;
                }
            }
        }

        cout<<ind<<"\n";
    }
}
