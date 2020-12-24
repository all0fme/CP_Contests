#include<bits/stdc++.h>
#define ll long long
#define pb push_back
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
        ll arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        ll sum_odd=0,sum_ev=0;
        for(int i=0;i<n;i++){
            if(i%2)
                sum_odd+=arr[i];
            else
                sum_ev+=arr[i];
        }
        if(sum_odd>sum_ev)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2)
                    cout<<arr[i]<<" ";
                else
                    cout<<"1 ";
            }
        }
        else{
                 for(int i=0;i<n;i++)
            {
                if(i%2==0)
                    cout<<arr[i]<<" ";
                else
                    cout<<"1 ";
            }

        }
        cout<<"\n";


    }
    return 0;
}
