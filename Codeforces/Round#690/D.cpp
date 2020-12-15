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
        vector<int> vec;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
            vec.pb(x);
        }
        int a=0,b=0,flag=0;
        for(int i=n;i>0;i--)
        {
            flag=0;
            if(sum%i==0)
            {
               a=sum/i;
               b=0;
            }
            for(int j=0;j<n;j++)
            {

                    b+=vec[j];

                if(b>a)
                {
                        flag=1;
                        break;
                }
                else if(b==a)
                    b=0;
            }
            if(flag)
                continue;
            else{
                cout<<n-i<<"\n";
                break;
            }
        }



    }
    return 0;
}
