#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if(l>(r/2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

