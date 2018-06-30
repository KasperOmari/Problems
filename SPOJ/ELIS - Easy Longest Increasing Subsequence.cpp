#include <bits/stdc++.h>
using namespace std;
int n,a[11],dp[11];
int LIS(int id){
	int &ret=dp[id];
	if(ret!=-1)
		return ret;
	ret=0;
	for(int i=id+1;i<n;++i)
		if(a[id]<a[i])
			ret=max(ret,LIS(i)+1);
	return ret;
}
int main(){
	memset(dp,-1,sizeof dp);
	scanf("%d",&n);
	for(int i=0;i<n;++i)
		scanf("%d",a+i);
	int sol=-1e9;
	for(int i=0;i<n;++i)
		sol=max(sol,LIS(i)+1);
	printf("%d\n",sol);
	return 0;
}
