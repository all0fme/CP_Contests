#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[n-1-i]>x)
            {
                flag=1;
                break;
            }

        }
        if(flag)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}
