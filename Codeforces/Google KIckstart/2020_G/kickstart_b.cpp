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
        int n;
        cin>>n;
        ll arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        ll sum=0,maxsum=arr[0][0];
        int x,y;
        for(int i=0;i<n;i++)
        {
            x=0;
            y=i;
            sum=0;
            while(x<n && y<n)
            {
                sum+=arr[x][y];
                x++;
                y++;
            }
            maxsum=max(maxsum,sum);
            x=i;
            y=0;
            sum=0;

            while(x<n && y<n)
            {
                sum+=arr[x][y];
                x++;
                y++;
            }
            maxsum=max(maxsum,sum);
        }


        printf("Case #%d: %lld\n",k++,maxsum);
    
    }
    

    }

