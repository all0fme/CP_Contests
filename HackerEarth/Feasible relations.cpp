#include<bits/stdc++.h>
#define pb push_back

using namespace std;

vector<int> arr[1000001];
int vis[1000001];
int cc[1000001];
int curr_cc=0;

void dfs(int node)
{
    vis[node]=1;
    cc[node]=curr_cc;
    for(int child: arr[node])
    {
        if(vis[child]==0)
        {
            dfs(child);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int>> edgeList;
        curr_cc=0;
        int n,k;
        string op;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            cc[i]=0;
            vis[i]=0;
            arr[i].clear();
        }
        for(int i=0;i<k;i++)
        {
            int a,b;
            cin>>a>>op>>b;
            if(op=="=")
            {
                arr[a].pb(b);
                arr[b].pb(a);
            }
            else{
                edgeList.pb({a,b});
            }

        }
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                curr_cc++;
                dfs(i);

            }
        }
        int flag=1;
        for(int i=0;i<edgeList.size();i++)
        {
            int a= edgeList[i].first;
            int b=edgeList[i].second;
            if(cc[a]==cc[b])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";


    }
    return 0;

}
