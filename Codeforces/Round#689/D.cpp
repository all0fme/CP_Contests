#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll prefix_sum[1000000];
ll find_sum(int i,int j)
{
    if(i!=0)
    return (prefix_sum[j]-prefix_sum[i-1]);
    else
        return prefix_sum[j];
}
void Divide(vector<ll> &sum,ll arr[],int low,int high)
{
    //cout<<"entr\n";
 if(high<low)
    return;
  sum.pb(find_sum(low,high));
  ll mid_num= arr[low] + ((arr[high]-arr[low])/2);
  if(arr[low]==arr[high])
    return;
  int mid= upper_bound(arr+low,arr+high+1,mid_num)-arr;
  //cout<<mid_num<<" "<<mid<<"\n";
  Divide(sum,arr,low,mid-1);
  Divide(sum,arr,mid,high);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        ll arr[n];
        vector<ll> sum;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            //sum.pb(arr[i]);
        }

        sort(arr,arr+n);
        prefix_sum[0]=arr[0];
        for(int i=1;i<n;i++)
            prefix_sum[i]=arr[i]+prefix_sum[i-1];
        Divide(sum,arr,0,n-1);
        sort(sum.begin(),sum.end());

        while(q--)
        {
            ll query;
            cin>>query;
            if(binary_search(sum.begin(),sum.end(),query))
                cout<<"Yes\n";
            else
                cout<<"No\n";

        }



    }
    return 0;
}
