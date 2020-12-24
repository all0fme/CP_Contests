#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> arr[1001];
int vis[1001];
int dist[1001];
void dfs(int v,int dis)
{
	vis[v]=1;
  dist[v]=dis;
	for(int child:arr[v])
	{
		if(vis[child]==0)
		{
			dfs(child,dis+1);
		}
	}
}

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[a].pb(b);
		arr[b].pb(a);
	}
  dfs(1,0);
	int q;
  cin>>q;
  int mindis=5000;
  int curgal=0;
  while(q--)
  {
    int girl;
    cin>>girl;
    if(dist[girl]<mindis)
    {
      curgal=girl;
      mindis=dist[girl];
    }
  }
  cout<<curgal;
}
