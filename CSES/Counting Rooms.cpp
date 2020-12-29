#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

char grid[1001][1001];
int vis[1001][1001];
int m,n,cc;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
bool isValid(int x,int y)
{
    if(x<1|| x>n||y<1||y>m )
        return false;
    if(vis[x][y]==1 || grid[x][y]=='#')
        return false;

    return true;
}
void dfs(int row,int col)
{
    vis[row][col]=1;
    for(int i=0;i<4;i++)
    {
        if(isValid(row+dx[i],col+dy[i]))
            dfs(row+dx[i],col+dy[i]);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(vis[i][j]==0 && grid[i][j]!='#')
            {
                dfs(i,j);
                cc++;

            }
        }
    }
    cout<<cc;
}
