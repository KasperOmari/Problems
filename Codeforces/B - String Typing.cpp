#include <bits/stdc++.h>
using namespace std;
int n,sol;
string s;
int main() {
  cin >>n>>s;
  if(n==1)return puts("1"),0;
  sol=n;
  for(int i=1;i<n;++i){
    //cout <<s.substr(0,i)<<" "<<s.substr(i,i)<<endl;
    if(s.substr(0,i)==s.substr(i,i))
      sol=min(sol,n-i+1);
  }
  cout <<sol<<endl;
  return 0;
}