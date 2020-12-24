#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<int> arr[100001];
int vis[100001];
int dist[100001];
vector<int> primes;
bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n % i == 0)return false;
	}
	return true;
}
bool isValid(int a,int b)
{
	int cnt=0;
	while(a)
	{
		if(a%10 != b%10)cnt++;
		a/=10;
		b/=10;
	}
	if(cnt==1)
	return true;
	else
	return false;
}
void buildGraph()
{
	for(int i=1000;i<=9999;i++)
	{
		if(isPrime(i))
		primes.pb(i);

	}
	for(int i=0;i<primes.size();i++)
	{
		for(int j=i+1;j<primes.size();j++)
		{
			if(isValid(primes[i],primes[j]))
			{
				arr[primes[i]].pb(primes[j]);
				arr[primes[j]].pb(primes[i]);
			}
		}
	}
}

void bfs(int node)
{
	queue<int> q;
	q.push(node);
	vis[node]=1;
	dist[node]=0;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int child: arr[curr])
		{
			if(vis[child]==0)
			{
				vis[child]=1;
				dist[child]=dist[curr]+1;
				q.push(child);
			}
		}

	}
}

int main() {
	buildGraph();
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		for(int i=1000;i<=9999;i++)
		{
			dist[i]=-1;
			vis[i]=0;
		}
		bfs(a);
		if(dist[b]!=-1)
		cout<<dist[b]<<"\n";
		else
		cout<<"Impossible\n";
	}
	return 0;
}
