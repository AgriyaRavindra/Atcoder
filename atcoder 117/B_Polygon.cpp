#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,l;
    cin>>n;
    int sum = 0;
    int h = 0;
    for(int i=0; i<n; i++){
        cin>>l;
        sum += l;
        h = max(l,h);
    } 
    sum -= h;
    cout<<(h >= sum ?"No" : "Yes")<<"\n";
    return 0;
}