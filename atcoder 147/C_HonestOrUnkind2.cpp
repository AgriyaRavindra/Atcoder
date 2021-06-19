#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i <n; i++)
typedef long long ll;
using namespace std;

int g[15][15];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    rep(i,n) rep(j,n) g[i][j] = -1;
    rep(i,n){
    	int m;
    	cin>>m;
    	rep(j,m){
    		int a,x;
    		cin>>a>>x;
    		--a;
    		g[i][a] = x;
    	}
    }
    int ans = 0;
    rep(i,1<<n){
    	vector<int> d(n);
    	rep(j,n) if(i>>j&1){
    		d[j] = 1;
    	}
    	bool ok = true;
    	rep(j,n){
    		if(d[j]){
    			rep(k,n){
    				if(g[j][k] == -1) continue;
    				if(g[j][k] != d[k]) ok = false;
    			}
    		}
    	}
    	if(ok) ans = max(ans, __builtin_popcount(i));
    }
    cout<<ans<<"\n";
    return 0;
}