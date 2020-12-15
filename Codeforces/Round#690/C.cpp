#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void calc(int x)
{
    int i=9;
    vector<int> vec;
   while(x>0 and i>0)
   {
       if((x-i)>=0)
       {x=x-i;
        vec.pb(i);
       }
       i--;

   }
   if(x==0)
   {
       for(int j=vec.size()-1;j>=0;j--)
       {
           cout<<vec[j];
       }
       cout<<"\n";
   }
   else
    cout<<"-1\n";
}
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
        if(n>45)
        {
            cout<<"-1\n";
        }
        else{
            calc(n);
        }

    }
    return 0;
}
