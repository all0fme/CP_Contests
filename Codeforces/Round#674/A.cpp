#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n<=2)
            cout<<1<<"\n";
        else{
            n=n-2;
            int ans=ceil(n*1.0/x);
            cout<<ans+1<<"\n";
        }


    }
}
