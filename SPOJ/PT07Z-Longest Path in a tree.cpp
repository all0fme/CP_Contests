#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> arr[100001];
int vis[100001];
int dis[100001];
void dfs(int v, int dist)
{
	vis[v]=1;
	dis[v]=dist;

	for(int child: arr[v])
	{
		if(vis[child]==0)
		{
			dfs(child,dist+1);
		}
	}
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		arr[y].pb(x);
		arr[x].pb(y);
	}
	int node=1;
	int dia=0;
	dfs(1,0);
	for(int i=1;i<=n;i++)
	{
		if(dis[i]>dia){
		dia=dis[i];
			node=i;
		}
	}
	for(int i=1;i<=n;i++)
	{
		dis[i]=0;
		vis[i]=0;
	}
	dfs(node,0);
		dfs(1,0);
	for(int i=1;i<=n;i++)
	{
		if(dis[i]>dia){
		dia=dis[i];
			//node=i;
		}
	}
	cout<<dia;

	return 0;
}
