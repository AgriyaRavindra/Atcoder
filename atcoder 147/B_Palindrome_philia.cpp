#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int n =s.size();
    int cnt = 0;
    for(int i=0; i < (n/2); i++){
        if(s[i] != s[n-1-i]) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}