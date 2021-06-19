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
    
long long binpow(long long a, long long b, long long MOD) {
    a %= MOD;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
    
ll lcm(ll a,ll b){
    return (a*b)/(__gcd(a,b));
}
    
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    ll mx = INT_MIN;
    ll sum=0;
    while(n--){
        ll x;
        cin>>x;
        sum += x;
        mx = max(mx,x);
        mp[x]++;
    }
    if(sum - mx <= mx){
        cout<<mx<<"\n";
    }else{
        ll cnt = INT_MIN,pos = INT_MAX,i=0,val=-1;
        for(auto e: mp){
            i++;
            if(cnt <= e.second && val < e.first){
                cnt = e.second;
                val = max(val,e.first);
                pos = i;
            }
        }

        ll ans=0,j=0;
        for(auto e: mp){
            j++;
            if(j >= pos){
                ans += val * e.second;    
            }
        }
        cout<<ans<<"\n";
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