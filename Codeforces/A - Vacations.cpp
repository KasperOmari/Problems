#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,a[105],dp[105][5];
int calc(int indx,int pre){
	if(indx==n)return 0;

	int &ret=dp[indx][pre];
	if(ret!=-1)return ret;
	ret=1+calc(indx+1,0);

	if(pre!=1&&(a[indx]==2||a[indx]==3))
		ret=min(ret,calc(indx+1,1));
	if(pre!=2&&(a[indx]==1||a[indx]==3))
		ret=min(ret,calc(indx+1,2));
	return ret;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	memset(dp,-1,sizeof dp);
	scanf("%d",&n);
	for(int i=0;i<n;++i)scanf("%d",a+i);
	printf("%d\n",calc(0,0));
	return 0;
}