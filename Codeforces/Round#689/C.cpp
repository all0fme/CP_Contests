
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
        int n,m;
        cin>>n>>m;
        int arr[n];
        int max_num=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]!=i+1)
                max_num=i+1;
        }
        double ans=1;
        for(int i=0;i<m;i++)
        {
            int x;
            double y;
            cin>>x>>y;

            if(x>=max_num)
            {
                ans=ans*(1-y);
            }
        }
        if(max_num==0)
            {
               ans=0;
            }
        ans=1-ans;
        printf("%0.6f\n",ans);

    }
    return 0;
}

