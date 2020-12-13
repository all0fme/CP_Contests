#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i+1]==s[i])
            {
                int j=i+2;
                while(j<n)
                {flag=0;
                    if(j<(n-1) &&s[j]!=s[i] && s[j+1]!=s[i])
                    {
                        reverse(s.begin()+i+1,s.begin()+j+1);
                        cnt++;
                        flag=1;
                        break;
                    }
                    j++;
                }
                if(flag==0)
                {
                    reverse(s.begin()+i+1,s.begin()+n);
                    cnt++;
                }
            }

        }
        cout<<cnt<<"\n";
    }
    return 0;
}

