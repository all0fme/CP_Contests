#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
// Function to return LCM of two numbers
long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        ll front_gcd[n];
        ll back_gcd[n];
        ll gcdn=arr[0];
        for(int i=0;i<n;i++)
        {
            gcdn=lcm(arr[i],gcdn);
            front_gcd[i]=gcdn;
        }
        gcdn=arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            gcdn=lcm(arr[i],gcdn);
            back_gcd[i]=gcdn;
        }
        int ans=1;
        for(int i=0;i<n-1;i++)
        {
            if(gcd(front_gcd[i],back_gcd[i+1])==1)
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<"\n";

    }
}
