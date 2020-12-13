#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,r,q;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        ll ans[n];
        ll sum=0;
        if(arr[0]==1)
        {
            for(int i=0; i<n; i++)
            {
                ans[i]=1;
            }
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(arr[i+1]!=1)
                {
                    if(arr[i]%2)
                    {
                        sum+=arr[i]-1;
                    }
                    else
                        sum+=arr[i];
                }
                else
                {
                    if(i==n-2)
                    {
                        if(arr[i]%2)
                        {
                            sum+=arr[i]-1;
                        }
                        else
                            sum+=arr[i];
                    }
                    else
                    {
                        if(arr[i]%2)
                        {
                            sum+=arr[i];
                        }
                        else
                            sum+=arr[i]-1;

                    }
                }

                ans[i]=sum%mod;
                sum=sum%mod;
            }
            if(arr[n-1]%2)
            {
                sum+=arr[n-1];
            }
            else
            {
                sum+=arr[n-1]-1;
            }
            ans[n-1]=sum%mod;
            sum=sum%mod;
        }

        cin>>q;
        while(q--)
        {
            ll finans=0;
            cin>>r;
            if(r%n)
            {
                ll k= r%n;
                finans=((((r/n))%mod)*(ans[n-1]%mod))%mod;
                if(k==1)
                {
                    if(arr[0]==1)
                    {
                        //do nothing;
                        if(r/n==0)
                            finans=1;
                    }
                    else
                    {
                        finans=(finans+arr[0]%mod)%mod;
                    }
                }
                else if(k==2)
                {
                    if(arr[0]==1)
                    {
                        finans=(finans+1%mod)%mod;
                    }
                    else if(arr[1]==0)
                    {
                        if(arr[0]%2)
                        {
                            finans=(finans+ arr[0]%mod)%mod;
                        }
                        else
                        {
                            finans=(finans+1+arr[0]%mod)%mod;
                        }
                    }
                    else
                    {
                        if(arr[0]%2)
                            finans=(finans+ (arr[1]+arr[0]-1)%mod)%mod;
                        else
                            finans=(finans+ (arr[1]+arr[0])%mod)%mod;

                    }

                }
                else
                {


                    if(arr[0]!=1)
                    {
                        finans=(finans+ans[k-3]%mod)%mod;
                        if(arr[k-2]==1)
                        {
                            finans=(finans+ arr[k-1]%mod)%mod;
                        }
                        else if(arr[k-1]==1)
                        {
                            if(arr[k-2]%2)
                            {
                                finans=(finans+ arr[k-2]%mod)%mod;
                            }
                            else
                            {
                                finans=(finans+1+arr[k-2]%mod)%mod;
                            }
                        }
                        else
                        {
                            if(arr[k-2]%2)
                                finans=(finans+ (arr[k-2]+arr[k-1]-1)%mod)%mod;
                            else
                                finans=(finans+ (arr[k-1]+arr[k-2])%mod)%mod;
                        }
                    }
                    else
                    {
                        finans=(finans+ans[k-3]%mod)%mod;
                    }

                }
            }
            else
            {
                finans=((((r/n)-1)%mod)*(ans[n-1]%mod))%mod;
                if(arr[0]!=1)
                {


                    if(arr[n-1]%2)
                    {
                        finans=(finans + ans[n-1]%mod)%mod;
                    }
                    else
                    {
                        finans=(finans + (ans[n-1]+1)%mod)%mod;
                    }
                }
                else
                {

                    finans=((((r/n))%mod)*(ans[n-1]%mod))%mod;
                }

            }
            cout<<finans<<"\n";
        }
    }
    return 0;

}

