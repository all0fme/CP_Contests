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
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.substr(n-4,n)=="2020"|| s.substr(0,4)=="2020"||((s.substr(0,1)+s.substr(n-3,n))=="2020")||((s.substr(0,2)+s.substr(n-2,n))=="2020")||((s.substr(0,3)+s.substr(n-1,n))=="2020"))
        {
            cout<<"YES\n";

        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}
