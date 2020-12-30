#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> adj[100001];
int vis[100001],col[100001];
int n,m,u,v,flag;
bool dfs(int node, int c)
{
    vis[node]=1;
    col[node]=c;
    for(int child: adj[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,c^1)==false)
                return false;
        }
        if(col[node]==col[child])
            return false;
    }
    return true;
}
int main()
{
    cin>>n>>m;
    while(m--)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            if(dfs(i,1)==false)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"IMPOSSIBLE\n";
    }
    else{
        for(int i=1;i<=n;i++)
        {
            if(col[i]==0)
                cout<<"1 ";
            else
                cout<<"2 ";
        }
    }
}
