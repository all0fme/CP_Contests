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
        int mxnum=-1;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i-1]<arr[i] || arr[i+1]<arr[i])
            {
                if(mxnum<arr[i])
                    ind=i+1;
                    mxnum=arr[i];
            }
        }
        if(arr[0]>mxnum && arr[1]<arr[0]){
            ind=1;
            mxnum=arr[0];}
        if(arr[n-1]>mxnum && arr[n-1]>arr[n-2]){
            ind =n;
            mxnum=arr[n-1];}

        cout<<ind<<"\n";
    }
}
