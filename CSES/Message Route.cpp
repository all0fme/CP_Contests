#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> adj[100001];
int vis[100001],dist[100001],prevDir[100001];
int n,m,u,v;
vector<int>route;

void bfs(int node)
{
    vis[node]=1;
    queue<int> q;
    q.push(node);
    dist[node]=0;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int child: adj[curr])
        {
            if(vis[child]==0)
            {
                vis[child]=1;
                dist[child]=dist[curr]+1;
                prevDir[child]=curr;
                q.push(child);
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        dist[i]=-1;
    while(m--)
    {
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    bfs(1);
    if(dist[n]!=-1)
    {
        cout<<dist[n]+1<<"\n";
        int num=n;
        while(num !=1)
        {
            int numb=prevDir[num];
            route.pb(numb);
            num=numb;
        }

        for(int k=route.size()-1;k>=0;k--)
        {
            cout<<route[k]<<" ";
        }
        cout<<n<<" ";
    }
    else cout<<"IMPOSSIBLE\n";


}

