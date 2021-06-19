#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod =  1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
     ll n,sum =0;
     cin>>n;
     vector<ll> v(n);
     for(ll& x: v) cin>>x;
     for(int i=0; i<n; i++){ 
         for(int j=i+1; j<n; j++){
             ll u = (v[i]^v[j])%mod;
             sum = (u + sum) % mod;
         }
     }
     cout<<(sum % mod)<<"\n";
    return 0;
}