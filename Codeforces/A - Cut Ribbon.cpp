#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<utility>
#include<iomanip>
#include<bitset>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
typedef long long int ll;
typedef long double ld;
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
int dp[4001];
int n,a,b,c;
int rec(int x){
	if(x==0)return 0;
	if(x<0)return -1e9;
	int &ret=dp[x];
	if(ret)return ret;
	ret=0;
	int mx;
	int r=rec(x-a)+1;
	mx=max(r,rec(x-b)+1);
	mx=max(mx,rec(x-c)+1);
	return ret=mx;
}
int main(){
	//freopen("a.txt","r",stdin);
	scanf("%d%d%d%d",&n,&a,&b,&c);
	printf("%d\n",rec(n));
	return 0;
}