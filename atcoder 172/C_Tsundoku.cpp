#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k,sum = 0,cnt = 0;
    cin>>n>>m>>k;
    //ll sz = max(n,m);
    vector<ll> a(n),b(m);
    for(ll &x : a) cin>>x; 
    for(ll &h : b) cin>>h;
    ll i=0,j=0;
    while(sum <= k){
        sum += min(a[i],b[j]);
        if(a[i] < b[j]) i++;
        if(b[j] < a[i]) j++;
        //cnt++;
    }
    cout<<(i+j)<<"\n";
    return 0;
}