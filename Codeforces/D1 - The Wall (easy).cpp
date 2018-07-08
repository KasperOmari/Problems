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
int n,m;
char g[101][101];
int dx[] = {0, 0,1,-1, 1, 1, -1,-1};
int dy[] = {1,-1,0, 0, 1,-1, -1, 1};
void DFS(int i,int j){
	g[i][j]='.';
	int x,y;
	for(int k=0;k<8;++k){
		x=i+dx[k];
		y=j+dy[k];
		if(x>=0&&y>=0&&x<n&&y<m&&g[x][y]=='B')
			DFS(x,y);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			scanf(" %c",&g[i][j]);
	int sol=0;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			if(g[i][j]=='B'){
				++sol;
				DFS(i,j);
			}

	printf("%d\n",sol);
	return 0;
}