#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> arr[100001];
int vis[100001];
int n,m,cc,u,v;

vector<pair<int,int>> edgeList;
void dfs(int node)
{
    vis[node]=1;
    for(int child:arr[node])
    {
        if(vis[child]==0)
            dfs(child);
    }
}

int main()
{
    cin>>n>>m;
    while(m--)
    {
       cin>>u>>v;
       arr[u].pb(v);
       arr[v].pb(u);
    }
    dfs(1);
    for(int i=2;i<=n;i++)
    {
        if(vis[i]==0)
        {
            edgeList.pb({1,i});
            cc++;
            dfs(i);
        }
    }
    cout<<cc<<"\n";
    for(pair<int,int> p : edgeList)
    {
        cout<<p.first<<" "<<p.second<<"\n";
    }

}


