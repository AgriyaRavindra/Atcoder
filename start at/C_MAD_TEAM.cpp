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
    
#define SF(v) for(auto &x: v) cin>>x
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
    int n; cin>>n;
    vector <vl> v(n);
    for(int i=0; i<n; i++){
        vl a(5);
        SF(a);
        v[i] = a;
    }
    ll sp=0,po=0,tec=0,kn=0,inv=0;
    ll mn = 10000000,mx = -1;
    FOR(i,0,n-2){
        FOR(j,i+1,n-1){
            FOR(k,j+1,n){
                po = max(v[i][0],max(v[j][0],max(v[k][0],po)));
                sp = max(v[i][0],max(v[j][0],max(v[k][0],sp)));
                tec = max(v[i][0],max(v[j][0],max(v[k][0],tec)));
                kn = max(v[i][0],max(v[j][0],max(v[k][0],kn)));
                inv = max(v[i][0],max(v[j][0],max(v[k][0],inv)));
                mn = min(po,min(sp,min(tec,min(kn,inv))));
                mx = max(mx,mn);
            }
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<5; j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<mx<<"\n";

}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
    //cin>>T;
    while(T--) solve();
    return 0;
}