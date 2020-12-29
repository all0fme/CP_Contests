#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;
char grid[31][31];
int vis[31][31],dist[31][31];
int N;
bool isValid(int x,int y)
{
    if(x<1|| x>N||y<1||y>N )
        return false;
    if(vis[x][y]==1 || grid[x][y]=='T')
        return false;

    return true;
}
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
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
        for(int i=0;i<4;i++)
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
    cin>>N;
    int src[2];
    int des[2];
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cin>>grid[i][j];
            dist[i][j]=-1;
            if(grid[i][j]=='S')
            {
                src[0]=i;
                src[1]=j;
            }
            if(grid[i][j]=='E')
            {
                des[0]=i;
                des[1]=j;
            }
        }
    }
    bfs(src[0],src[1]);
    cout<<dist[des[0]][des[1]];

}
