#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> arr[100001];
int vis[100001];
void dfs(int v)
{
	vis[v]=1;
	for(int child:arr[v])
	{
		if(vis[child]==0)
		{
			dfs(child);
		}
	}
}

int main()
{
	int n,e;
	cin>>n>>e;

	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[a].pb(b);
		arr[b].pb(a);
	}
	int cc=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			dfs(i);
			cc++;
		}
	}
	cout<<cc;
}
