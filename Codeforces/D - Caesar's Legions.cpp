#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
const int MOD=1e8;
int n1,n2,k1,k2,dp[105][105][11][11];
int calc(int a,int b,int c,int d){
	if(a>n1||b>n2)return 0;
	if(c>k1||d>k2)return 0;
	if(a==n1&&b==n2)return 1;

	int &ret=dp[a][b][c][d];
	if(ret!=-1)return ret;
	
	ret=((calc(a+1,b,c+1,0))%MOD+(calc(a,b+1,0,d+1))%MOD)%MOD;

	return ret;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	memset(dp,-1,sizeof dp);
	scanf("%d%d%d%d",&n1,&n2,&k1,&k2);
	printf("%d\n",calc(0,0,0,0));
	return 0;
}