#include <bits/stdc++.h>
using namespace std;
int y,p;
bool check(int n){
  for(int i=2;i*i<=n;++i)
    if(i>p)break;
    else if(n%i==0)return 0;
  return 1;
}
int main() {
  scanf("%d%d",&p,&y);
  for(int i=y;i>p;--i)
    if(check(i))
      return printf("%d\n",i),0;
  puts("-1");
  return 0;
}