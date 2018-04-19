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
int n,m,x;
int dx[]={0, 0,1,-1, 1, 1, -1,-1};
int dy[]={1,-1,0, 0, 1,-1, -1, 1};
char g[101][101];
bool clc(int i,int j){
	int x,y;
	for(int k=0;k<8;++k){
		x=i+dx[k];
		y=dy[k]+j;
		if(x>=0&&y>=0&&x<n&&y<m&&g[x][y]=='*')
			return 0;
	}
	return 1;
}
int main(){
	//freopen("a.txt","r",stdin);
	while(scanf("%d%d",&n,&m),n){
		for(int i=0;i<n;++i)
			scanf("%s",g[i]);
		x=0;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(g[i][j]=='*')
					if(clc(i,j))++x;
			}
		}
		printf("%d\n",x);
	}
	return 0;
}