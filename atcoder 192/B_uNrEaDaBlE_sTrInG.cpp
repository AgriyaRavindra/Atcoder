#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    getline(cin,s);
    int f =0;
    int n = s.size();
    for(int i=1; i<(n+1); i++){
        // char c =s[i-1];
        // if(i%2==1 && int(c) < 97){
        //    f = 1;
        //    break;
        // }
        // if(i%2==0 && int(c) >= 97){
        //     f =1 ;
        //     break;
        // }
        if(i%2==1 && s[i] <= 'z' && s[i] >= 'a'){
            cout<<"No\n";
            return 0;
        }
        if(i%2==0 && s[i] <= 'Z' && s[i] >= 'A'){
            cout<<"No\n";
            return 0;
        }
    }
    //if(f==0) cout<<"Yes\n";
    //else cout<<"No\n";
    cout<<"Yes\n";
    return 0;
}