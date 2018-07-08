#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int main(){
  cin >>s;
  int c;
  for(int i=0;i<s.size();++i){
    if(s[i]=='1'){
      c=0;
      int j=i+1;
      while(j<s.size()){
        if(s[j]=='0')++c;
        if(c>=6)break;
        ++j;
      }
      if(c>=6)break;
    }
  }
  puts(c>=6?"yes":"no");
  return 0;
}