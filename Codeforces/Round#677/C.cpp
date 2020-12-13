#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int x;
       cin>>x;
       int prod=x%10;
       int cnt=0;
       while(x>0)
       {
           x/=10;
           cnt++;
       }
       if(prod==1)
       {
           cout<<cnt<<"\n";
       }
       else{
        cout<<(prod-1)*10 + (cnt*(cnt+1))/2<<"\n";
       }
    }
}
