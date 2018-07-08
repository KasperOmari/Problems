#include <bits/stdc++.h>
using namespace std;
int n,a[1000010],sol;
typedef long long ll;
ll cum[1000010];
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;++i)
    scanf("%d",a+i);
  for(int i=0;i<n;++i){
    if(i-a[i]>=0)
      ++cum[i-a[i]];
    else ++cum[0];
    --cum[i];
  }
  for(int i=1;i<n;++i){
    cum[i]+=cum[i-1];
  }
  for(int i=0;i<n;++i)
    if(!cum[i])++sol;
  printf("%d\n",sol);
  return 0;
}