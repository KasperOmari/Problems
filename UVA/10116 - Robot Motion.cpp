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
char g[11][11];
int g2[11][11];
int n,m,x,l,ext;
bool f;
int DFS(int i,int j){
	if(i<0||i>=n||j<0||j>=m)return 0;
	else if(g2[i][j]){
		f=1;
		printf("%d step(s) before a loop of %d step(s)\n",g2[i][j]-1,ext-g2[i][j]+1);
		return 0;
	}
	else if(g[i][j]=='S'){
		g2[i][j]=++ext;
		return DFS(i+1,j)+1;
	}
	else if(g[i][j]=='N'){
		g2[i][j]=++ext;
		return DFS(i-1,j)+1;
	}else if(g[i][j]=='W'){
		g2[i][j]=++ext;
		return DFS(i,j-1)+1;
	}else {
		g2[i][j]=++ext;
		return DFS(i,j+1)+1;
	}
}
int main(){
	//freopen("a.txt","r",stdin);
	while(scanf("%d%d%d",&n,&m,&x),n){
		memset(g2,0,sizeof g2);
		--x;
		l=ext=0;
		f=0;
		for(int i=0;i<n;++i)
			scanf("%s",g[i]);
		l=DFS(0,x);
		--ext;
		if(!f) printf("%d step(s) to exit\n",l);
	}
	return 0;
}