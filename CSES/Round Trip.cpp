#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> adj[100001];
int vis[100001],parent[100001];
vector<int> route;
int n,m,u,v,flag,sv,ev;

bool dfs(int node,int par)
{
    vis[node]=1;
    parent[node]=par;
    for(int child: adj[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,node)==true)
            {
               // route.pb(child);
                return true;
            }
        }
        else
        {
            if(child !=par)
            {
               // route.pb(child);
               ev=node;
               sv=child;

                return true;
            }
        }
    }
    return false;
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
            if(dfs(i,-1)==true)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        int temp=ev;
        route.pb(ev);
        while(temp!=sv)
        {
            route.pb(parent[temp]);
            temp=parent[temp];
        }
        route.pb(ev);
        cout<<route.size()<<"\n";
        for(int num:route)
            cout<<num<<" ";
        //cout<<route[0]<<" ";
    }
    else
        cout<<"IMPOSSIBLE\n";
}
