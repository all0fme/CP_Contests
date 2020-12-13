#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    int k=1;
    while(t--)
    {
        ll w,n;
        cin>>w>>n;
        ll arr[w];
        ll max=0;
        for(int i=0;i<w;i++)
        {
            cin>>arr[i];
            if(arr[i]>max)
            max=arr[i];
        }
        ll sum=0;
        for(int i=0;i<w-1;i++)
        {
            sum=sum+min(abs(arr[i]-max),n-abs(arr[i]-max));

        }
        printf("Case #%d: %d\n",k++,sum);
    }
}
