#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,n1=0;
    cin>>n;
    vector<string> a,b;
    for(int i=0; i<n; i++){
        string str,s = "";
        cin>>str;
        n1 = str.size();
        if(str[0] == '!'){
            for(int j=1; j<n1; j++){
                s += str[j];
            }
            a.push_back(s);
        }else if(str[i] != '!'){
            b.push_back(str);
        }
    }
    int k = a.size();
    int l = b.size();
    int f=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0; i<k; i++){
        if(f == 1){
            break;
        }
        for(int j=0; j<l; j++){
            if(a[i] == b[j]){
                cout<<a[i]<<"\n";
                f = 1;
                break;
            }
        }
    }
    if(f==0){
        cout<<"satisfiable"<<"\n";
    }
    return 0;
}