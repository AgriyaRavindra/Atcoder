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
    
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
    
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
    
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    
const int MOD = 1000000007;
const int MX = 100001;
    
void solve(){
    int n, res = INT_MAX;
    cin >> n;
    vector<pair<int,int>> w1(n), w2(n);
    for(int i = 0; i < n; i++) {
        cin >> w1[i].first >> w2[i].first;
        res = min(res, w1[i].first + w2[i].first);
        w1[i].second = w2[i].second = i;
    }
    sort(w1.begin(), w1.end());
    sort(w2.begin(), w2.end());
    if(w1[0].second != w2[0].second) {
        res = min(res, max(w1[0].first, w2[0].first));
    } else {
        res = min({res, max(w1[0].first, w2[1].first), max(w1[1].first, w2[0].first)});
    }
 
    cout << res << endl;
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
    //cin>>T;
    while(T--) solve();
    return 0;
}