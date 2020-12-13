#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll x, ll y)
{
    ll res = 1;     // Initialize result

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res*x;

        // y must be even now
        y = y>>1; // y = y/2
        x = x*x;  // Change x to x^2
    }
    return res;
}

ll calc(vector<int> &vec,ll n)
{
    ll ans=floor(log2(n+2));
       ans--;

       ll sum=2;
       ll mul=2;
       sum=power(2,ans+1);
       sum=sum-2;
       ll newans= (n-sum)/2;
       ll finans=ans+newans;
       vec.push_back(1);
       for(int i=0;i<ans-1;i++)
       {
           vec.push_back(0);

       }
      while(vec.size()+newans>2000)
       {
           newans=calc(vec,2*newans);
       }
       return newans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
       if(n%2)
       {
           cout<<"-1\n";
           continue;
       }
       ll ans=floor(log2(n+2));
       ans--;

       ll sum=2;
       ll mul=2;
       sum=power(2,ans+1);
       sum=sum-2;
       ll newans= (n-sum)/2;
       if(newans<0)
        newans=0;
       ll finans=ans+newans;

       //cout<<finans<<"\n";
       vector<int> vec;
       vec.push_back(1);
       for(int i=0;i<ans-1;i++)
       {
           vec.push_back(0);

       }
       while(vec.size()+newans>2000)
       {
           newans=calc(vec,2*newans);
       }
       cout<<vec.size()+newans<<"\n";
       for(int i=0;i<vec.size();i++)
       {
           cout<<vec[i]<<" ";
       }
       for(int i=0;i<newans;i++)
        cout<<1<<" ";

       cout<<"\n";
    }
    return 0;
}
