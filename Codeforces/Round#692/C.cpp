#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<int> arr[100001];
int vis[100001];
int cycle=0;

bool dfs(int node, int par)
{
    vis[node]=1;
    for(int child: arr[node])
    {
        if(vis[child]==0)
        {
            dfs(child,node);

        }
        else
        {
            if(child != par)
            {
                return true;
            }
        }
    }
    return false;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        for(int i=1;i<=n;i++)
        {
            vis[i]=0;
            arr[i].clear();
        }
        int ans=m;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x==y)
                {ans--;
                 continue;
                }
            arr[x].pb(y);
            arr[y].pb(x);
        }
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(i,-1)==true)
                    ans++;
            }
        }
        cout<<ans<<"\n";


    }
    return 0;
}
