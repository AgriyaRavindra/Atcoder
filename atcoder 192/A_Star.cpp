#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    n = n+100;
    n %= 100;
    if(n == 0){
        cout<<"100"<<"\n";
    }else{
        cout<<100 - n%100<<"\n";
    }
    return 0;
}