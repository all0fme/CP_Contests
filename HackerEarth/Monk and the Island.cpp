#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<int> arr[100001];
int vis[100001];
int dist[100001];

void bfs(int node)
{
  vis[node]=1;
  dist[node]=0;
  queue<int> q;
  q.push(node);
  while(!q.empty())
  {
    int curr=q.front();
    q.pop();
    for(int child: arr[curr])
    {
      if(vis[child]==0)
      {
        vis[child]=1;
        dist[child]=dist[curr]+1;
        q.push(child);
      }
    }
  }

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
      arr[i].clear();
      vis[i]=0;
      dist[i]=0;

    }
    for(int i=1;i<=m;i++)
    {
      int x,y;
      cin>>x>>y;
      arr[x].pb(y);
      arr[y].pb(x);
    }

    bfs(1);
    cout<<dist[n]<<"\n";

  }
}
