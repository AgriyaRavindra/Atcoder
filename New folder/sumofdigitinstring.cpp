#include <bits/stdc++.h>
using namespace std;

int findSum(string ch){
	string temp = "";
	int sum = 0;

	for (int i=0;ch[i]!='\0';i++){
		if (isdigit(ch[i]))
			temp += ch[i];
		else{
			sum += atoi(temp.c_str());
			temp = "";
		}
	}
	return sum+atoi(temp.c_str()) ;	
}

void solve_test_case(){
    string str;
    cin>>str;
    int tsum = findSum(str);
    cout<<tsum<<"\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
   int tt;
   cin>>tt;
   while(tt--){
    solve_test_case();
   }
}