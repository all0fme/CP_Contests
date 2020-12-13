#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=4*n;
        int j=(2*n)+2;

        for(;i>=j;i-=2)
        cout<<i<<" ";
        cout<<"\n";
    }
}
