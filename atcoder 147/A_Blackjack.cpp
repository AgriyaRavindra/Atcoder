#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c >= 22){
        cout<<"bust"<<"\n";
    } else{
        cout<<"win"<<"\n";
    }
    return 0;
}