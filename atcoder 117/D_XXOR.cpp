#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,k,p=0;
    cin>>n>>k;
    vector<long long> v(n);
    for(long long &x : v) cin>>x;
    for(long long i=0; i<n; i++){
        long long m = 0;
        for(long long  j=0; j<n; j++){
            m += v[i]^v[j];
        }
        p = max(m,p);
    }
    cout<<p<<"\n";
    return 0;
}