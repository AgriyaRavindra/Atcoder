#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
     int d,t,s;
     cin>>d>>t>>s;
     if(d <= t*s){
         cout<<"Yes"<<"\n";
     }else{
         cout<<"No"<<"\n";
     }
    return 0;
}