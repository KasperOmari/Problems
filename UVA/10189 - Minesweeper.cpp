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
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
int grd[101][101];
char grdc[101][101];
int main(){
	//freopen("a.txt","r",stdin);
	int n,m,x,y,cas=1;
	bool f=0;
	while(scanf("%d%d",&n,&m),(n||m)){
		if(f)puts("");
		f=1;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf(" %c",&grdc[i][j]);
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				grd[i][j]=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(grdc[i][j]=='*')
					for(int k=0;k<8;k++){
						x=dx[k]+i;
						y=dy[k]+j;
						if(x>=0&&y>=0&&x<n&&y<m)
							grd[x][y]++;
					}
			}
		}
		printf("Field #%d:\n",cas++);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(grdc[i][j]=='*')printf("*");
				else printf("%d",grd[i][j]);
			}
			puts("");
		}
	}
	return 0;
}