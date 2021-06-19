#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s,t = "abc";
    cin>>s;
    sort(s.begin(),s.end());
    if(t == s) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}