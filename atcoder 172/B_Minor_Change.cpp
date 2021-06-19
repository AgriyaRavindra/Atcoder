#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s,t;
    cin>>s>>t;
    int cnt = 0;
    int N = s.size();
    int m = t.size();
    int sz = min(N,m);
    for(int i=0; i<sz; i++){
        if(s[i] != t[i]) cnt++;
    } 
    cout<<cnt<<"\n";
    return 0;
}