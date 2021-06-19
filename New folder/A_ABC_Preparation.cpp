#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
     vector<int> a(4);
     for(int i =0;i<4;i++) cin>>a[i];
     cout<<is_sorted(a.begin(),a.end());
    return 0;
}