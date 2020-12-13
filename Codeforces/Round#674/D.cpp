#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{


        int n,x;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        set<ll> s;
        s.insert(0);
        ll sum=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];

            if(s.find(sum) != s.end())
            {

                cnt++;
                s.clear();
                sum=arr[i];
                s.insert(0);
                s.insert(sum);

            }
            else{
                s.insert(sum);
            }
        }
        cout<<cnt<<"\n";




}
