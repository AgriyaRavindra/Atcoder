#include <bits/stdc++.h>
using namespace std;

int solve(int x){
    int sum = 0;
    while(x > 0){
        sum += x%10;
        x = x/10;
    }
    return sum;
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    int k = solve(a);
    int c = solve(b);
    cout<<max(k,c)<<"\n";
    return 0;
}