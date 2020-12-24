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
        ll a,b,c;
        cin>>a>>b>>c;
        ll num=min(a,min(b,c));
        ll sunm=a+b+c;

        if(num>=sunm/9 && sunm%9==0)
            cout<<"YES\n";
        else cout<<"NO\n";


    }
    return 0;
}
