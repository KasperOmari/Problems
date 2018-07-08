#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
vector<int>v;
int main() {
  scanf("%d",&n);
  scanf("%d",&m);
  for(int a,i=0;i<n;++i){
    scanf("%d",&a);
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  int sum=0,cnt=0;
  for(int i=0;i<v.size();++i){
    sum+=v[i];
    ++cnt;
    if(sum>=m)break;
  }
  cout <<cnt<<endl;
  return 0;
}