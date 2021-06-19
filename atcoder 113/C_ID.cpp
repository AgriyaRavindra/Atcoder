#include <bits/stdc++.h>
using namespace std;
    
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
    
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
    
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
    
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

#define pii pair<int,int>  
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define JUGAD freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define pb push_back
#define po pop_back
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define pii pair<int,int>
#define pll pair<lli,lli>
#define pdd pair<ld,ld>
#define ff first
#define ss second
const int N = 8+1;

    
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
    
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    
const int MOD = 1000000007;
const int MX = 100001;

string stringer(int a,int b){
	string s,t;
	s=to_string(a);
	t=to_string(b);
	//reverse(s.begin(),s.end());
	//reverse(t.begin(),t.end());
	int xx=6-s.size();
	int yy=6-t.size();
	string rep;
	while(xx--){rep.pb('0');}
	rep+=s;
	while(yy--){rep.pb('0');}
	rep+=t;
	return rep;
}

void solve(){
    int n,m;cin>>n>>m;
	vector<vector<pii>> v(n+1);
	for(int i=0;i<m;i++){
		int p,y;cin>>p>>y;
		v[p].eb(y,i);
	}
	string ans[m];
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
		for(int j=0;j<v[i].size();j++){
			ans[v[i][j].ss]=stringer(i,j+1);
		}
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<'\n';
	}
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
    //cin>>T;
    while(T--) solve();
    return 0;
}