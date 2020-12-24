#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> arr[2001];
int vis[2001];
int col[2001];
bool dfs(int v,int c)
{
	vis[v]=1;
	col[v]=c;
	for(int child:arr[v])
	{
		if(vis[child]==0)
		{
			if(dfs(child,c^1)==false)return false;
		}
		else
		{
			if(col[v]==col[child])
			return false;
		}
	}
	return true;
}

int main()
{
	int t;
	cin>>t;
	int k=1;
	while(t--){
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
			if(dfs(i,0)==false)
			cc++;

		}
	}
	for(int i=0;i<n+1;i++)
	{
		vis[i]=0;
		col[i]=0;
		arr[i].clear();
	}

	cout<<"Scenario #"<<k++<<":\n";
	if(cc>0)
	{
		cout<<"Suspicious bugs found!\n";
	}
	else
	{
		cout<<"No suspicious bugs found!\n";
	}


}
}
