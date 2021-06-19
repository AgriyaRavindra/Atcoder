#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int v,t,s,d;
    cin>>v>>t>>s>>d;
    string ans;
    ans = ((v*t - d) * (v*s - d) > 0) ? "Yes" : "No";
    cout << ans << endl;
    return 0;
}