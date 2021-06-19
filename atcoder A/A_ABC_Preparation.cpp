#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
     vector<int> v(4);
     for(int& s: v) cin>>s;
     cout<<*min_element(v.begin(),v.end())<<"\n";
    return 0;
}