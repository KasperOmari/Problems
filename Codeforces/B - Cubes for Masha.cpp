#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sol,n,g[3][6];
bool vis[3][10]={};
bool visc[3]={};
bool calc(int x){
  if(x==0)return 1;
  int num=x%10;
  bool ret=0;
  for(int i=0;i<3;i++){
    if(vis[i][num]&&!visc[i]){
      visc[i]=1;
      ret|=calc(x/10);
      visc[i]=0;
    }

    
  } 
  return ret;
}
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;++i){
    for(int j=0;j<6;++j){
      scanf("%d",&g[i][j]);
        vis[i][g[i][j]]=1;
    }
  }
  int i=1;
  for(;i<1000;++i){
    if(!calc(i)){
      break;
    }
    
  }
  
  printf("%d\n",i-1);
  return 0;
}