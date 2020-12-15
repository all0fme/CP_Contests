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
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int i=0,j=n-1;
        while(i<=j)
        {
            if(i<=j){
            cout<<arr[i]<<" ";
            }
            if(i<j)
            {
                cout<<arr[j]<<" ";
            }
            i++;
            j--;

        }
        cout<<"\n";

    }
    return 0;
}
