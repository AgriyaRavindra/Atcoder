#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll maxn = 1e6+100;

ll lcm(ll a,ll b){
	return (a*b)/(__gcd(a,b));
}

void solve(){
	ll n;cin>>n;
	ll ans = 1;
	for(ll i=2;i<=n;i++){
		ans = lcm(ans,i);
	}
	cout<<ans+1<<"\n";
}

int main(){
	solve();
}