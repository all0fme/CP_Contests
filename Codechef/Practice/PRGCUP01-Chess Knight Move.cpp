#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;
//char grid[9][9];
int vis[9][9],dist[9][9];
bool isValid(int x,int y)
{
    if(x<1|| x>8||y<1||y>8 )
        return false;
    if(vis[x][y]==1)
        return false;

    return true;
}
int dx[]={2,1,-2,-1,2,1,-2,-1};
int dy[]={1,2,-1,-2,-1,-2,1,2};
void bfs(int x,int y)
{
    queue<pair<int ,int>> q;
    q.push({x,y});
    vis[x][y]=1;
    dist[x][y]=0;
    while(!q.empty())
    {
        int Xnew=q.front().f;
        int Ynew=q.front().s;
        q.pop();
        for(int i=0;i<8;i++)
        {
            if(isValid(Xnew+dx[i],Ynew+dy[i]))
            {
                dist[Xnew+dx[i]][Ynew+dy[i]]=dist[Xnew][Ynew]+1;
                vis[Xnew+dx[i]][Ynew+dy[i]]=1;
                q.push({Xnew+dx[i],Ynew+dy[i]});

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
        char a,c;
        int b,d;
        cin>>a>>b>>c>>d;
        //cin>>c>>d;
        for(int i=1;i<9;i++)
        {
            for(int j=1;j<9;j++)
            {
                vis[i][j]=0;
                dist[i][j]=-1;

            }
        }
        //int xi=a-'a'+1;
    //int xf=c-'a'+1;
    bfs(a-'a'+1,b);
    cout<<dist[c-'a'+1][d]<<"\n";
    }


}
