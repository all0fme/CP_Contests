#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int num= a&b;
        int ans= (a^num) + (b^num);
        cout<<ans<<"\n";



    }

    return 0;
}
