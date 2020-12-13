#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    int k=1;
    while(t--)
    {
        string s;
        cin>>s;
        int a1=0,a2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(i,4)=="KICK")
            a1++;
            if(s.substr(i,5)=="START")
            a2+=a1;
        }
        printf("Case #%d: %d\n",k++,a2);
    }
}