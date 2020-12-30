#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int vis[1001][1001],dist[1001][1001],prevDir[1001][1001];
char grid[1001][1001];
int n,m;
vector<int> route;
bool isValid(int x, int y)
{
    if(x<1||x>n||y<1||y>m)
        return false;
    if(vis[x][y]==1 || grid[x][y]=='#')
        return false;
    return true;
}
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
string dir="RLUD";
void bfs(int x, int y)
{
    vis[x][y]=1;
    dist[x][y]=0;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty())
    {
        int currX=q.front().first;
        int currY=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int newX=currX+dx[i];
            int newY=currY+dy[i];
            if(isValid(newX,newY)){
            vis[newX][newY]=1;
            dist[newX][newY]=dist[currX][currY]+1;
            prevDir[newX][newY]=i;
            q.push({newX,newY});}
        }
    }
}

int main()
{
    int startX,startY,endX,endY;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dist[i][j]=-1;
            cin>>grid[i][j];
            if(grid[i][j]=='A')startX=i,startY=j;
            if(grid[i][j]=='B')endX=i,endY=j;

        }
    }
    bfs(startX,startY);
    if(dist[endX][endY]==-1)
    {
        cout<<"NO\n";
    }
    else
    {

        cout<<"YES\n";
        cout<<dist[endX][endY]<<"\n";
        int i=endX,j=endY;
        while(!(i==startX && j==startY))
        {
            int num=prevDir[i][j];
            route.pb(num);
            i=i-dx[num];
            j=j-dy[num];

        }
        for(int i=route.size()-1;i>=0;i--)
        {
            cout<<dir[route[i]];
        }
    }
}
