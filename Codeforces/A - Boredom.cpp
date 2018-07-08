#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
typedef long long  ll;
ll dp[N],n,x,freq[N];
int main(){
  scanf("%d" , &n );
  for(int i=0;i<n;++i){
       scanf("%lld",&x);
       ++freq[x];
  }
  dp[1]=freq[1];
  for(int i=2;i<=N;++i)
      dp[i]=max(dp[i-2]+freq[i]*i,dp[i-1]);
  printf("%lld",dp[N-1]);
  return 0;
}