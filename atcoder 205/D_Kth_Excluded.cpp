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
    
// void solve(){
//     ll n,q;
//     cin>>n>>q;
//     int a[100000];
//     FOR(i,0,n+1) a[i] = 0;
//     ll mx = INT_MAX;
//     FOR(i,0,n+1){
//         ll x;
//         cin>>x;
//         mx = max(mx , x);
//         a[x] = 1;
//     }
    
//     ll total =0;
//     FOR(i,0,n+1){
//         if(a[i] != 1) total++;
//     }
//     while(q--){
//         ll z;
//         cin>>z;
//         ll cnt=0;
//         if(z > total){
//             ll ans = z - total;
//             cout<<mx + ans<<"\n";
//             break;
//         }else {
//             int i=0;
//             while(cnt != z && i <= n){
//                 if(a[i] != 1){
//                     cnt++;
                    
//                 }
//                 i++;
//             }
//             cout<<a[i]<<"\n";
//             break;
//         }

//     }

// }

ll output(vl &v, ll z,ll n){
    if(z < v[0]){
        return z;
    }
    ll cnt= v[0] - 1;
    FOR(i,1,n-1){
        cnt += v[i] - v[i-1];
        if(cnt >= z){
            cnt = cnt - v[i] + v[i-1];
            FOR(j,v[i-1],v[i]){
                cnt++;
                if(cnt == z){
                    return z;
                }
            }
        }
    }
    return (v[n-1] + z - cnt);
}
    
void solve(){
    ll n,q;
    cin>>n>>q;
    vl v(n);
    SF(v);
    sort(all(v));
    while(q--){
        ll z;
        cin>>z;
        ll res = output(v,z,n);
        cout<<res<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
    cin>>T;
  //  while(T--) solve();
    return 0;
}