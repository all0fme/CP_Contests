#include<bits/stdc++.h>
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

        int n,q;
        cin>>n>>q;
        ll arr[n];
        int maxans=n;
        for(int i=0;i<n;i++)cin>>arr[i];
         for(int i=0;i<n-1;i++)
            {
                if(arr[i]==arr[i+1])
                {
                    maxans--;
                }
            }

        while(q--)
        {
            int x;
            ll y;
            cin>>x>>y;
            int left=0,right=0;
            if(n==1)
            {
                cout<<1<<"\n";
            }
            if(x==1)
            {
                if(arr[0]==arr[1] && y!=arr[1])
                    maxans++;
                if(arr[0]!= arr[1] && y==arr[1])
                    maxans--;
            }
            else if(x==n)
            {
                if(arr[n-1]==arr[n-2] && y!=arr[n-2])
                    maxans++;
                if(arr[n-1]!=arr[n-2] && y==arr[n-2])
                    maxans--;
            }
            else
            {int ind=x-1;
                if(arr[ind-1]==arr[ind] && y!= arr[ind-1])
                    maxans++;
                if(arr[ind-1] != arr[ind] && y==arr[ind-1])
                    maxans--;
                if(arr[ind+1]==arr[ind] && y!= arr[ind+1])
                    maxans++;
                if(arr[ind+1] != arr[ind] && y==arr[ind+1])
                    maxans--;

            }
            arr[x-1]=y;




            cout<<maxans<<"\n";

    }
}
}
