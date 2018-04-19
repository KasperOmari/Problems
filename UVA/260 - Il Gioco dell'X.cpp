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
int dx[]={0,0,1,-1,1,-1};
int dy[]={1,-1,0,0,1,-1};
char g[201][201];
int n;
void DFS(int i,int j,char ch){
	g[i][j]='.';
	for(int k=0;k<6;++k){
		int x=i+dx[k];
		int y=j+dy[k];
		if(x>=0&&x<n&&y>=0&&y<n&&g[x][y]==ch)
			DFS(x,y,ch);
	}
}
int main(){
	//freopen("a.txt","r",stdin);
	int kas=1;
	while(scanf("%d",&n),n){
		for(int i=0;i<n;++i)
			scanf("%s",g[i]);
		bool sol=0;
		for(int i=0;i<n;++i){
			DFS(i,0,'w');
			for(int j=0;j<n;++j)
				if(g[j][n-1]=='.'){
					sol=1;
					break;
				}
			if(sol)break;
		}
		
		if(sol)
			printf("%d W\n",kas);
		else 
			printf("%d B\n",kas);
		++kas;
	}
	return 0;
}