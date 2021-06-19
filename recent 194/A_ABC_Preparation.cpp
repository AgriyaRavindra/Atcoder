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
    string s;
    cin>>s;
    int n = s.size(),d,k=INT_MIN;
        vector<char> v;
        for(int i=0; i<n; i++){
            int x = s[i];
            char c = s[i];
            if(!(x >= 97 && x <= 122)) {
                v.push_back(c);
            }
        }
        
        if(v.size() >= 2){
            sort(v.begin(),v.end());
            for(int i=1; i<v.size(); i++){
                if(v[i] != v[i-1]){
                    d = v[i];
                    k=1;
                    break;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(s[i] == d){
                cout<< s[i] -'0'<<"\n";;
            }
        }
        
        if(k==0){
            cout<< -1<<"\n";;
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