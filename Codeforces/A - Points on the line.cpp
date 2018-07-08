#include <bits/stdc++.h>
using namespace std;
int n,m,ar[101],sol=1e9;
int main() {
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;++i)scanf("%d",ar+i);
  sort(ar,ar+n);
  for(int i=0;i<n;++i)
    for(int j=i;j<n;++j)
      if(ar[j]-ar[i]<=m)
        sol=min(sol,i+n-1-j);
  printf("%d\n",sol);
  return 0;
}