#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
     int n,m,cnt =0,f =0;
     cin>>n>>m;
     vector<double> v(n);
     for(int i=0; i<n; i++){
         cin>>v[i];
         cnt += v[i];
     }
     int ans = 0;
     for(auto& val: v)
     {
        if(val*4*m >= cnt) ans++;
     }
     cout<< (ans >= m ? "Yes" : "No");
    return 0;
}