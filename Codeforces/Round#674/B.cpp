#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a,b,c,d,flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c>>d;
            if(b==c)
                flag=1;

        }
        if(m%2==0 && flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
