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
int n,q,sol;
int dx[]={0, 0,1,-1, 1, 1, -1,-1};
int dy[]={1,-1,0, 0, 1,-1, -1, 1};
char g[101][101];
void DFS(int i,int j){
	  g[i][j]='*';
	  int x,y;
	  for(int d=0;d<8;++d){
		  x=i+dx[d];
		  y=j+dy[d];
		  if(x>=0&&x<n&&y>=0&&y<q&&g[x][y]=='@')
			  DFS(x,y);
	  }
}
int main(){
	//freopen("a.txt","r",stdin);
	while(scanf("%d%d",&n,&q)&&n){
		sol=0;
		for(int i=0;i<n;++i)
			scanf("%s",g[i]);

		for(int i=0;i<n;++i){
			for(int j=0;j<q;++j){
				if(g[i][j]=='@'){
					++sol;
					DFS(i,j);
				}
			}
		}
		printf("%d\n",sol);
	}
	return 0;
}