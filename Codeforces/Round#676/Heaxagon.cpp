#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll cost(ll a,ll b,ll c)
{
    if(a>0)
        return a*b;
    else
        return (-a)*c;

}
void solve()
{
    ll c1,c2,c3,c4,c5,c6,x,y;
    cin>>x>>y;
    cin>>c1>>c2>>c3>>c4>>c5>>c6;
    ll ans1=cost(x,c6,c3) + cost(y,c2,c5);
    ll ans2= cost(y,c1,c4) + cost(x-y,c6,c3);
    ll ans3=cost(x,c1,c4)+cost(y-x,c2,c5);
    cout<<min(ans1,min(ans2,ans3))<<"\n";

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
