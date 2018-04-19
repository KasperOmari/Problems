#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
char X[1005],Y[1005];
int LCS(int i,int j){
	if(i==0||j==0)return 0;
	int &ret=dp[i][j];
	if(ret!=-1)		return ret;
	if(X[i-1]==Y[j-1])
		ret=LCS(i-1,j-1)+1;
	else 
		ret=max(LCS(i-1,j),LCS(i,j-1));
	return ret;
}
int main(){
	while(gets(X)&&gets(Y)){
		memset(dp,-1,sizeof dp);
		printf("%d\n",LCS(strlen(X),strlen(Y)));
	}
	return 0;
}