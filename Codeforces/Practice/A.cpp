#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    int vis[5000001];
    int curr=0;
   vector<pair<int,int>> vec;
    int a,b;
    int cnt=0;



    for(int i=1;i<=q;i++)
    {
        cin>>a;
        if(a==1)
        {
           cnt++;
            cin>>b;
            vec.pb({cnt,b});
            //for(int k=0;k<vec.size();k++)
            //cout<<vec[k].first<<" "<<vec[k].second<<"--el\n";
        }
        else if(a==2)
        {

            cout<<vec[curr].first<<" ";
            vis[curr++]=1;


        }
        else
        {
            int maxnum=-1;
            int maxptr=0;
            int ptr=0;
            for(int j=0;j<vec.size();j++)
            {
                if(vis[i]==0){
                if(vec[j].second>maxnum)
                {
                    maxnum=vec[j].second;
                    maxptr=vec[j].first;
                    ptr=j;
                }

            }}
              cout<<maxptr<<" ";
                vis[ptr]=1;


        }

    }
}
