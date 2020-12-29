#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<int> adj[1000001];
int vis[1000001],in[1000001],low[1000001],flag,timer;
vector<pair<int,int>> road;
void dfs(int node, int par)
{
    vis[node]=1;
    in[node]=low[node]=timer++;
    for(int child : adj[node])
    {
        if(child==par) continue;
        if(vis[child])
        {
            low[node]=min(low[node],in[child]);
            if(in[child]<in[node])
            {
                road.pb({node,child});
            }
        }
        else
        {
            dfs(child,node);
            if(low[child]>in[node])
            {
                flag=1;
                return;
            }
            low[node]=min(low[child],low[node]);
            road.pb({node,child});


        }
    }
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1,-1);
    if(flag)
    {
        cout<<"0\n";
    }
    else
    {
        for(int i=0;i<road.size();i++)
        {
            cout<<road[i].first<<" "<<road[i].second<<"\n";
        }
    }
}
