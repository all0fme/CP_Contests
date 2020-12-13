#include<bits/stdc++.h>
#define ll long long
#define mod 998244353

using namespace std;
ll binomialCoeff(ll n,ll k)
{
    ll res = 1;

    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;

    // Calculate value of [n*(n-1)*---*(n-k+1)] /
    // [k*(k-1)*---*1]
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        //res= ((res%mod)*((n-i)%mod))%mod;
        res /= (i + 1);
        res=res%mod;
    }

    return res;
}

// A Binomial coefficient based function to find nth catalan
// number in O(n) time
ll catalan(ll n)
{
    // Calculate value of 2nCn
    ll c = binomialCoeff(2 * n, n);

    // return 2nCn/(n+1)
    return c%mod ;
}

int main()
{

        ll n;
        cin>>n;
        ll arr[2*n];
        for(int i=0;i<2*n;i++)cin>>arr[i];
        sort(arr,arr+2*n);
        ll sum=0;

        for(int i=0;i<n;i++){
                sum=sum+abs(arr[i]-arr[n+i]);
                sum=sum%mod;

        }

        ll ans= catalan(n)*(sum%mod);
        cout<<ans%mod<<"\n";

}

