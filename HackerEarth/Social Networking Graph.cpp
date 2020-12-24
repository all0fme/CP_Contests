#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<int> arr[100001];
int vis[100001];
int dist[100001];
int level[100001];

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
        level[dist[child]]++;
        q.push(child);
      }
    }
  }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
   int n,e,q;
   cin>>n>>e;

    for(int i=1;i<=e;i++)
    {
      int x,y;
      cin>>x>>y;
      arr[x].pb(y);
      arr[y].pb(x);
    }
    cin>>q;
    while(q--)
    {
        for(int i=0;i<=n;i++)
        {
            vis[i]=0;
            level[i]=0;
        }
        int a,b;
        cin>>a>>b;
        bfs(a);
        cout<<level[b]<<"\n";
    }



  }


