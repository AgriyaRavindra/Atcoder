#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long a,b,k;
    cin>>a>>b>>k;
    if(abs(b - a ) < k*2){
        for(int i=a; i<=b; i++){
            cout<<i<<"\n";
        }
    } else {
        vector<long> v(k*2);
        for(int i=0; i<k; i++){
            v[i] = a + i;
            v[2*k - i - 1] = b - i;
        }
        for(int x: v){
            cout<<x<<"\n";
        }
    }
    return 0;
}