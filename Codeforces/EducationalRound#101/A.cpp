#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
    cin>>s;
    ll n = s.length();
    ll c = 0,open = 0,close =0 ;
    ll count = 0;
    if(n%2 != 0){
        cout<<"NO\n";
        continue;
    }
    if(s[0] == ')'){
        cout<<"NO\n";
        continue;
    }
    if(s[n-1] == '('){
        cout<<"NO\n";
        continue;
    }
    cout<<"YES\n";
    continue;

    }
}
