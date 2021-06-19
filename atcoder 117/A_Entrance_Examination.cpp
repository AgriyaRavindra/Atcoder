#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double t,x;
    cin>>t>>x;
    x = t / x;
    printf("%.9f\n", x);
    return 0;
}