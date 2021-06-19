#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    for(ll i=0; i<sqrt(n); i++){
        for(ll j=0; j<sqrt(n); j++){
            if(n == pow(3,i) + pow(5,j)){
                cout<<i<<" "<<j<<"\n";
                return 0;
            }
        }
    } 
    cout<<-1<<"\n";
    return 0;
}