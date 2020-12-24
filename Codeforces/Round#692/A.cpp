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
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                cnt++;
            }
            else break;
        }
        int nl=n-cnt;
        if(cnt>nl)
            cout<<"Yes\n";
        else
            cout<<"No\n";


    }
    return 0;
}
