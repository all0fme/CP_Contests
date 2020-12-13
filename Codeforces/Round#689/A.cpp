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
        int n,k;
        cin>>n>>k;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(cnt<k)
                cout<<"a";
            else if(cnt<2*k)
                cout<<"b";
            else if(cnt<3*k)
                cout<<"c";
            else
            {
                cout<<"a";
                cnt=0;
            }
            cnt++;
        }
        cout<<"\n";

    }
    return 0;
}
