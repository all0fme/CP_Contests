#include<bits/stdc++.h>
#define pb push_back

using namespace std;

vector<int> adj[100001];
int vis[100001],dist[100001],n,s,t;
void bfs(int node, int dis)
{
    vis[node]=1;
    dist[node]=dis;
    queue<int> q;
    q.push(node);
    while(!q.empty())
    {
        int num=q.front();
        q.pop();
        for(int child: adj[num])
        {
            if(vis[child]==0)
            {
                vis[child]=1;
                dist[child]=dist[num]+1;
                q.push(child);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>s>>t;
    for(int i=1;i<=n;i++)
    {
        int v;
        cin>>v;
        adj[i].pb(v);
    }
    for(int i=1;i<=n;i++)
        dist[i]=-1;
    if(s==t)
    {
        cout<<0;
    }
    else{
    bfs(s,0);
    cout<<dist[t];}

}
