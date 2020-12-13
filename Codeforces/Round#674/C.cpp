#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<0<<"\n";
            continue;
        }
       ll ans=sqrt(n);
       ll k=ans-1;
       n=n-ans;
       while(ans*k<n)
        k++;
       cout<<k+ans-1<<"\n";

    }
}
