#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 int width[500][500];
 char arr[500][500];
 void calc(int i,int j,int n,int m)
 {
     int left=j;
     int right =j;
     while(left>=0 && arr[i][left]=='*')
     {
         left--;
     }
     while(right<m && arr[i][right]=='*')
     {
         right++;
     }
     int min_width=min(j-left,right-j);
     width[i][j]=2*min_width-1;
 }
 int solve(int n,int m)
 {
     int cnt=0;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(arr[i][j]=='*')
             {
                 cnt++;
                 int height=2;
                 while(true)
                 {
                     if(width[i+height-1][j]>=(2*height-1) && (i+height-1<n))
                     {cnt++;
                        height++;
                     }
                     else break;
                 }
             }
         }
     }
     return cnt;
 }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        //char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                width[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='*')
                calc(i,j,n,m);
                else width[i][j]=0;
            }
        }
        int res=solve(n,m);
        cout<<res<<"\n";
       /* for(int i=00;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<width[i][j]<<" ";
            cout<<"\n";
        }*/

    }
    return 0;
}
