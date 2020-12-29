#include<bits/stdc++.h>
#define pb push_back

using namespace std;

vector<int> adj[100001];
int vis[100001],in[100001],n,m,t;
vector<int>res;
bool kahnsAlgo(int n)
{


    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=1;i<=n;i++)
    {
        if(in[i]==0)
            q.push(i);
    }
    while(!q.empty())
    {
        int num=q.top();
        q.pop();
        res.pb(num);
        for(int child: adj[num])
        {
            in[child]--;
            if(in[child]==0)
                q.push(child);
        }
    }
    return (res.size()==n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        in[v]++;
    }
    if(!kahnsAlgo(n))
        cout<<"Sandro fails.\n";
    else
    {
        for(int i: res)
            cout<<i<<" ";
    }



}

