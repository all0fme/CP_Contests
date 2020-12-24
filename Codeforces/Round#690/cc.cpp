#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{

	    string s;
	    cin>>s;
	    int nm1=0,nm2=0;
	    int i=0;
	    int len=s.length();
	    if(len%2)
	    {
	        cout<<"-1\n";
	        continue;
	    }
	    stack <char> stk;
	    for(int i=0;i<len;i++)
        {
            if(stk.empty())
                stk.push(s[i]);
            else{
                if(stk.top()!=s[i])
                    stk.pop();
                else
                    stk.push(s[i]);
            }
        }

        cout<<stk.size()/2<<"\n";


	}
	return 0;
}
