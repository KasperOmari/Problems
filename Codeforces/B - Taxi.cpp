#include<bits/stdc++.h>
using namespace std;
int n,sol;
int fr[5];
int main(){
  scanf("%d",&n);
  for(int a,i=0;i<n;++i){
    scanf("%d",&a);
    ++fr[a]; 
  }
  sol+=fr[4];sol+=fr[3];
  if(fr[3]>=fr[1])fr[1]=0;
  else fr[1]-=fr[3];
  int x=(2*fr[2])+fr[1];
  sol+=(x%4==0)?(x/4):((x/4)+1);
  printf("%d\n",sol);
  return 0;
}