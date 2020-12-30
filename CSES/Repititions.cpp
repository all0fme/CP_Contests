#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cnt=0,maxn=1;
    cin>>str;
    int len=str.length();
    int i=0,j=0;
    while(i<len-1)
    {
        if(str[i+1]==str[i])
        {
            j=i+1;
            cnt=1;
            while(str[j]==str[i] && j<len)
            {
                j++;
                cnt++;
            }
            i=j;
            if(cnt>maxn)
                maxn=cnt;
        }
        else
            i++;
    }
    cout<<maxn;
}
