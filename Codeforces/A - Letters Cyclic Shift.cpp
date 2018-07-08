#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
  cin >>s;
  int i=0;
  while(s[i]=='a')++i;
  if(i==s.size())
    s[i-1]='z';
  while(s[i]!='a'&&i<s.size())
    --s[i++];
  cout <<s<<endl;
  return 0;
}