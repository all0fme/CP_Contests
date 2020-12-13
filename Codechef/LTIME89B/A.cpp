#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n>=1)
            cout<<1<<" "<<n-1<<"\n";
        else
            cout<<"-1\n";

    }
}
