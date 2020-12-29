#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)cin>>b[i];
        int p1[n],p2[m];
        p1[0]=a[0];
        p2[0]=b[0];
        int max1=p1[0];
        int max2=p2[0];
        for(int i=1;i<n;i++)
            {p1[i]=a[i]+p1[i-1];
             if(p1[i]>max1)
                max1=p1[i];
            }
        for(int i=1;i<m;i++)
            {p2[i]=b[i]+p2[i-1];
              if(p2[i]>max2)
                max2=p2[i];
            }

            cout<<max(max(0,max1+max2),max(max1,max2))<<"\n";


    }



}
