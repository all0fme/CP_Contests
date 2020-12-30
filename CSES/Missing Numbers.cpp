#include<bits/stdc++.h>
#define ll long long
using namespace std;
int arr[200001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<"\n";
            break;
        }
    }
}
