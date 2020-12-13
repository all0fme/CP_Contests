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
        int n;
        cin>>n;
        int ans[n+1],arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            ans[i]=-1;
        }
        int num=1;
        for(int i=n;i>0;i--)
        {
            if(ans[arr[i]]!= -1)
            {
                ans[i]=ans[arr[i]];

            }
            else
            {
                ans[i]=num;
                num++;
            }
        }
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
