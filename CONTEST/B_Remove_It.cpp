#include <bits/stdc++.h>
using namespace std;

typedef long long ll;  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,x;
    cin>>n>>x;
    for(ll i=0; i<n; i++){
        ll y;
        cin>>y;
        if(y != x){
            cout<<y<<" ";
        }
    } 
    cout<<"\n";
    return 0;
}