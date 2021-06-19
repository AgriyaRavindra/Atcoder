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
    
// long long binpow(long long a, long long b, long long MOD) {
//     a %= MOD;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % MOD;
//         a = a * a % MOD;
//         b >>= 1;
//     }
//     return res;
// }
    
void solve(){
    ll n;
    cin>>n;
    priority_queue<ll> xs;
    priority_queue<ll> ys;
    priority_queue<ll> xl;
    priority_queue<ll> yl;
    if(n == 1){
        cout<<0<<"\n";
        return;
    }
    for(int i=0; i<2; i++){
        int x,y;
        cin>>x>>y;
        xs.push(x);
        ys.push(y);
        x *= -1;
        y *= -1;
        xl.push(x);
        yl.push(y);

    }
    for(int i=2; i<n; i++){
        int x,y;
        cin>>x>>y;
        if(xs.top() > x){
            xs.pop();
            xs.push(x);
        }
        x *= -1;
        if(xl.top() > x){
            xl.pop();
            xl.push(x);
        }
        if(ys.top() > y){
            ys.pop();
            ys.push(y);
        }
        y *= -1;
        if(yl.top() > y){
            yl.pop();
            yl.push(y);
        }
    }
    vl vx;
    vl vy;
    // ll cnt=0;

    while (!xs.empty()) {
        vx.push_back(xs.top());
        xs.pop();
    }
    while (!xl.empty()) {
        vx.push_back(-(xl.top()));
        xl.pop();
    }
    while (!ys.empty()) {
        vy.push_back(ys.top());
        ys.pop();
    }
    while (!yl.empty()) {
        vy.push_back(-(yl.top()));
        yl.pop();
    }
    
    sort(all(vx));
    sort(all(vy));

    ll x1 = vx[3] - vx[0];
    ll y1 = vy[3] - vy[0];
    ll x2,y2;
    if(vx[3] - vx[1] > vx[2] - vx[0]){
        x2 = vx[3] - vx[1];
    }else {
        x2 = vx[2] - vx[0];
    }
    if(vy[3] - vy[1] > vy[2] - vy[0]){
        y2 = vy[3] - vy[1];
    }else {
        y2 = vy[2] - vy[0];
    }
    int a[4];
    a[0] = x1;
    a[1] = x2;
    a[2] = y1;
    a[3] = y2;
    sort(a,a+3);
    for(int i=2; i>0; i--){
        if(a[i] != a[3]){
            cout<<a[i];
            return;
        }
    }
    cout<<a[2]<<"\n";
    
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T = 1;
    //cin>>T;
    while(T--) solve();
    return 0;
}

// unordered_map<ll ,list<ll> >l;

    // for(int i=0; i<n; i++){
    //     int x,y;
    //     cin>>x>>y;
    //     l[x].push_back(y);
    // }
    // for(auto p: l){
    //     ll city = p.first;
    //     cout<<city<<" ";
    //     list<ll> nbrs = p.second;        
    //     for(auto nbr: nbrs){
    //         cout<<nbr<<" ";
    //     } 
    //     cout<<"\n";      
    // }