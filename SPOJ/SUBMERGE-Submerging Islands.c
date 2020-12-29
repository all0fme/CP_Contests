#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> adj[10001];
int vis[10001],in[10001],low[10001],Island_count,timer;

void(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer++;
    int children++;
    for(int child: adj[node])
    {
        if(child==par)continue;
        else if(vis[child])
        {
            low[node]=min(low[node],in[node]);
        }
        else
        {
            dfs(child,node)
            if(low[child]>=in[node] && par!=-1)
                Island_count++;
            low[node]=min(low[node],low[child]);
            children++;
        }
    }
    if(par==-1 && children>1)
        Island_count++;

}
int main()
{
    while(true){
    int n,m;
    cin>>n>>m;
    if(n==m && n==0)
        break;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);

    }
    dfs(1,-1);
    cout<<Island_count<<"\n";}
}
