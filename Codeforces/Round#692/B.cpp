#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
bool check(ll n)
{
    ll m = n;
    while (n) {
        ll r = n % 10;
        if (r > 0)
            if ((m % r) != 0)
                return false;
        n /= 10;
    }

    return true;
}
ll count(ll l)
{

    ll ans=l;
    while(true){
            if (check(ans))
            return ans;
            else
                ans++;

    }



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<count(n)<<"\n";



    }
    return 0;
}
