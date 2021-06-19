#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double x,y,r,sum = 0;
    cin>>x>>y>>r;
    for(int i=0; i<=r; i++){
        double tp = (r*r) - (i*i);
        sum += sqrt(tp);
    }
    sum = 1 + 4*sum;
    cout<<floor(sum)<<"\n";
    return 0;
}