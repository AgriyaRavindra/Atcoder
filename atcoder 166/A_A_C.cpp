#include <bits/stdc++.h>
using namespace std;
     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int c= 0;
    for(int i=0;i<=2; i++){
        cin>>s[i];
        if(i == 1 && s[i] == 'R'){
            c = 1;
        }
    }
    if(c){
        cout<<"ABC \n";
    }else {
        cout<<"ARC \n";
    }

}