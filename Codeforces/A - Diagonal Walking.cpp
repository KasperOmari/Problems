#include <bits/stdc++.h>
using namespace std;
int n,i;
string s;
int main() {
  cin >>n>>s;
  while(i+1<s.size()){
    if(s[i]!=s[i+1]){
      s.erase(i,1);
    }++i;
  }
  cout <<s.size()<<endl;
  return 0;
}