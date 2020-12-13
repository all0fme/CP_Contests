#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s[n];
       for(int i=0;i<n;i++)cin>>s[i];
        for(int i=0;i<n;i++)
        {
            if(s[i]=='t')
            {
               for(int j=i+1;j<n;j++)
            {
                if(s[j]=='r')
                {
                    s[i]='r';
                    s[j]='t';
                    break;
                }
            }
            }


        }
        for(int i=0;i<n;i++)
            cout<<s[i];
        cout<<"\n";



    }
    return 0;
}
