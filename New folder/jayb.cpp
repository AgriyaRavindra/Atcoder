#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int f =0;
   if(n < 0) f = 1;
   n = abs(n);
   int num = 0;
   while(n>0){
      int x = n%10;
      num = num*10 + x;
      n /= 10;
   }
   if(f==0){
      cout<<num<<"\n";
   }else {
      num = num*(-1);
      cout<<num<<"\n";
   }
}