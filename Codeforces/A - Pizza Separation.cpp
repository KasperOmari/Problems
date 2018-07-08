#include <bits/stdc++.h>
int n,a[370];
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;++i)scanf("%d",a+i);
  int sol=360,s=0;
  for(int i=0;i<n;s=0,++i)
    for(int j=i;j<n;++j)s+=a[j],sol=std::min(sol,std::abs(360-s-s));
  printf("%d\n",sol);
  return 0;
}