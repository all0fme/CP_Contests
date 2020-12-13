#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll fact[21]={0};

ll factno(ll n)
{
    if(n==0||n==1)
        return 1;
    else return n*factno(n-1);
}

int main()
{
    fact[0]=1;
fact[1]=1;

    int n;
    cin>>n;
    ll ans= (((factno(n)/factno(n/2))/factno(n/2))*(factno((n/2)-1))*(factno((n/2)-1)))/2;
    cout<<ans<<"\n";

}
