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
        char arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        char a,b,c,d;
        a=arr[0][1];
        b=arr[1][0];
        c=arr[n-2][n-1];
        d=arr[n-1][n-2];
        if(c=='0' && d=='0')
        {
            if(a=='0' && b=='0')
            {
                cout<<2<<"\n";
                cout<<"1 2\n2 1\n";
            }
            else if(a=='1' && b=='1')
            {
                cout<<0<<"\n";
            }
            else if(a=='0' && b=='1')
            {
                cout<<1<<"\n";
                cout<<"1 2\n";
            }
            else if(a=='1' && b=='0')
            {
                cout<<2<<"\n";
                cout<<"2 1\n";
            }

    }
    else if(c=='1' && d=='1')
        {
            if(a=='0' && b=='0')
            {
                cout<<0<<"\n";
            }
            else if(a=='1' && b=='1')
            {
                cout<<2<<"\n";
                cout<<"1 2\n2 1\n";
            }
            else if(a=='0' && b=='1')
            {
                cout<<1<<"\n";
                cout<<"2 1\n";
            }
            else if(a=='1' && b=='0')
            {
                cout<<2<<"\n";
                cout<<"1 2\n";
            }

    }
    else if(c=='1' && d=='0')
        {
            if(a=='0' && b=='0')
            {
                cout<<1<<"\n";
                cout<<n<<" "<<n-1<<"\n";
            }
            else if(a=='1' && b=='1')
            {
                cout<<1<<"\n";
                cout<<n-1<<" "<<n<<"\n";
            }
            else if(a=='0' && b=='1')
            {
                cout<<2<<"\n";
                cout<<"2 1\n"<<n<<" "<<n-1<<"\n";
            }
            else if(a=='1' && b=='0')
            {
                cout<<2<<"\n";
                cout<<"1 2\n"<<n<<" "<<n-1<<"\n";
            }

    }
    else if(c=='0' && d=='1')
        {
            if(a=='0' && b=='0')
            {
                cout<<1<<"\n";
                cout<<n-1<<" "<<n<<"\n";
            }
            else if(a=='1' && b=='1')
            {
                cout<<1<<"\n";
                cout<<n<<" "<<n-1<<"\n";
            }
            else if(a=='0' && b=='1')
            {
                cout<<2<<"\n";
                cout<<"2 1\n"<<n-1<<" "<<n<<"\n";
            }
            else if(a=='1' && b=='0')
            {
                cout<<2<<"\n";
                cout<<"1 2\n"<<n-1<<" "<<n<<"\n";
            }

    }
    }

    return 0;
}
