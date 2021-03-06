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

string Flip(string s)
{
    int n = s.size();
    n /= 2;
    string flip_s = s.substr(n, n);
    flip_s += s.substr(0, n);
    return flip_s;
}

void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    bool flip = false;

    ll q; cin>>q;
    while(q--){
        int t;
        ll a,b;
        cin>>t>>a>>b;
        if(t==1){
            swap(s[a-1],s[b-1]);
        }
        if(t==2){
           // flip = !flip;
            s = Flip(s);
        }
        // if(flip == true)
        // s = Flip(s);
    }
    cout<<s<<"\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
   // cin>>T;
    while(T--) solve();
    return 0;
}