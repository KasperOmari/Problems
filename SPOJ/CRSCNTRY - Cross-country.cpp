#include <bits/stdc++.h>
using namespace std;
int sol,n,a,dp[1005][1005];
vector<int>as,bs;
int lcs(){
	for(int i=0;i<=as.size();++i){
		for(int j=0;j<=bs.size();++j){
			if(i==0||j==0)
				dp[i][j]=0;
			else if(as[i-1]==bs[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[as.size()][bs.size()];
}
int main(){
	scanf("%d",&n);
	bool f=0;
	while(n--){
		as.clear();
		bs.clear();
		sol=0;
		while(scanf("%d",&a)&&a)
			as.push_back(a);
		int b;
		while(1){
			bs.clear();
			scanf("%d",&b);
			if(b==0)break;
			bs.push_back(b);
			while(scanf("%d",&b)&&b)
				bs.push_back(b);
 
			sol=max(sol,lcs());
		}
		printf("%d\n",sol);
	}
	return 0;	
}
