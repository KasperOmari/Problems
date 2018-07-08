#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
  scanf("%d",&n);
  if(n==1)puts("1 1\n1");
  else printf("%d %d\n1 3\n",3*(n-1),2);
  return 0;
}