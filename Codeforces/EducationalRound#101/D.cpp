#include<bits/stdc++.h>
#define pb push_back
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
        int n;
        cin>>n;
        int nn=n;
        int cnt=0;
        if(n>8)
        {


        while(nn>1)
        {
            nn=ceil(nn/8.0);
            cnt++;
        }
        cout<<cnt+n-4+3<<"\n";
        for(int i=3;i<n;i++)
        {
            if(i==8)continue;
            cout<<i<<" "<<n<<"\n";
        }
        for(int i=0;i<cnt;i++)
        {
            cout<<n<<" 8\n";
        }
        for(int i=0;i<3;i++)
        {
            cout<<"8 2\n";
        }
        }
        else{
            int nn=n;
        int cnt=0;
                while(nn>1)
            {
                cnt++;
                nn=ceil(nn/2.0);
            }
            cout<<n-3+cnt<<"\n";
            for(int i=3;i<n;i++)
                cout<<i<<" "<<n<<"\n";
            while(cnt--)
            {
                cout<<n<<" 2\n";
            }


        }

    }



}
