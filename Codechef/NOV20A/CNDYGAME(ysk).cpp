/*Author : Yuvraj Singh
 * Patience is Power
 *
 * */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin(),(x).end()
#define M 1000000007


void solve(){

	ll n; cin>>n;
	vector<ll>arr(n);
	vector<ll>dp(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	ll res = 0;
	bool flg =false;
	if(n == 1){
		if(arr[0]&1){
			res = arr[0];
			dp[0] = res;
		}
		else{
			dp[0] = arr[0];
			res = arr[0] - 1;
		}
	}

	else if(arr[0] == 1){
		res = 1;
		flg = true;
		fill(dp.begin(),dp.end(),1);

	}
	else{

		for(int i=0;i<n-1;i++){
			if(arr[i]==1){
				if(arr[i-1]&1){
					dp[i] = dp[i-1];
				}
				else{
					dp[i] = dp[i-1] +1;
				}
				continue;
			}
			if(arr[i+1] == 1 && i == n-2){
				if(arr[i]&1){
					dp[i] = res + arr[i];
					res += arr[i] - 1;
				}
				else{
					res += arr[i];
					dp[i] = res;
				}
			}
			else if(arr[i+1]==1 && i<n-2){
				if(arr[i]&1){
					res += arr[i];
					dp[i] = res;
				}
				else{
					dp[i] = res + arr[i];
					res += arr[i] - 1;
				}
			}
			else if(arr[i]&1){
				dp[i] = res + arr[i];
				res += arr[i] - 1;
			}
			else{
				res += arr[i];
				dp[i] = res;
			}
		}
		if(arr[n-1]&1){
			res += arr[n-1];
			dp[n-1] = res;
		}
		else{
			dp[n-1] = res + arr[n-1];
			res += arr[n-1] - 1;

		}
	}

	ll q; cin>>q;
	while(q--){
		ll r; cin>>r;
		ll div = r/n;
		ll rem = r%n;
		if(flg == true){
			if(rem>1){
				cout<<(div+1)%M<<"\n";
				continue;
			}
			else{
				cout<<(div)%M<<"\n";
				continue;
			}
		}
		if(div == 0){
			cout<<dp[rem-1]%M<<"\n";
		}
		else{
			if(rem == 0){
				ll ans = (((div - 1)%M*res%M)%M + dp[n-1]%M)%M;
				cout<<ans<<"\n";
			}
			else{
				ll ans  = (((div)%M*res%M)%M + dp[rem-1]%M)%M;
				cout<<ans<<"\n";
			}
		}
	}
	cout<<"\n";

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	//#ifndef ONLINE_JUDGE
    	//freopen("input.txt", "r", stdin);
    	//freopen("output.txt", "w", stdout);
	//#endif

	ll t; cin>>t;

	while(t--)
		solve();

    return 0;
}
