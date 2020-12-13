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
      int arr[n];
      for(int i=0;i<n;i++)cin>>arr[i];
      int cnt=0;
      for(int i=0;i<n;i++)
      {

          if(arr[i]==1)
          {int j=i+1;
              while(arr[j]!=1 && j<n)
              {
                  j++;
              }
              if(j<n)
              {
                  cnt+=j-i-1;

              }
              j=i-1;
          }
      }
      cout<<cnt<<"\n";
    }
}
