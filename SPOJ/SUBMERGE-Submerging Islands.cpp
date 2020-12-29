#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> adj[10001];
int vis[10001],in[10001],low[10001],timer;
set<int>s;

void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer++;
    int children=0;
    for(int child: adj[node])
    {
        if(child==par)continue;
        else if(vis[child])
        {
            low[node]=min(low[node],in[child]);
        }
        else
        {
            dfs(child,node);
            low[node]=min(low[node],low[child]);
            if(low[child]>=in[node] && par!=-1)
                s.insert(node);

            children++;
        }
    }
    if(par==-1 && children>1)
        s.insert(node);

}
int main()
{
    while(true){
    int n,m;
    cin>>n>>m;
    if(n==m && n==0)
        break;
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        vis[i]=0;

    }
    s.clear();
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);

    }
    timer=0;
    //Island_count=0;
    dfs(1,-1);
    cout<<s.size()<<"\n";}
}
