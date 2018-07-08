#include<bits/stdc++.h>
using namespace std;
int n,m,l,r,x;
int v[1000005];
int nxt[1000005];
int main(){
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;++i)scanf("%d",v+i);
  nxt[n-1]=-1;
  for(int i=n-2;i>=0;--i){
    if(v[i]==v[i+1])nxt[i]=nxt[i+1];
    else nxt[i]=i+1;
  }
  while(m--){
    scanf("%d%d%d",&l,&r,&x);--l;--r;
    if(v[l]!=x)printf("%d\n",l+1);
    else{
      if(nxt[l]!=-1&&nxt[l]<=r)printf("%d\n",nxt[l]+1);
      else puts("-1");
    }
  }
  return 0;
}