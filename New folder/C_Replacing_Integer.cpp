#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
     long long n,k;
     cin>>n>>k;
     if(k == 1){
         cout<<0<<"\n";
         return 0;
     }else if(k == 0){
         cout<<n<<"\n";
     }else {
         long long val = n%k;
         val = min(abs(val-k),val);
         cout<<val<<"\n";
     }
     
    return 0;
}