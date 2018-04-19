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
int n,m,r,c;
int dx[]={0, 0,1,-1};
int dy[]={1,-1,0, 0};
char g[1001][1001];
void DFS(int i,int j,int a){
	g[i][j]='.';
	for(int k=0;k<4;++k){
		int x=i+dx[k],y=j+dy[k];
		if(x>=0&&y>=0&&y<m&&x<n&&g[x][y]==a)
			DFS(x,y,a);
	}
}
int fr[26];
bool com(pair<char,int>a,pair<char,int>b){
	return a.second>b.second&&a.first>b.first;
}
int main(){
	//freopen("a.txt","r",stdin);
	int t;
	scanf("%d",&t);
	int kas=1;
	while(t--){
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;++i)
			scanf("%s",g[i]);
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(g[i][j]!='.'){
					++fr[g[i][j]-'a'];
					DFS(i,j,g[i][j]);
				}
			}
		}
		printf("World #%d\n",kas++);
		vector<pair<char,int> >v;
		for(int i=0;i<26;++i){
			if(fr[i]){
				v.push_back(make_pair((char)i+'a',fr[i]));
				//cout <<char(i+'a')<<": "<<fr[i]<<endl;
				fr[i]=0;
			}
		}
		sort(v.begin(),v.end(),com);
		for(int i=0;i<v.size();++i)
			cout <<v[i].first<<": "<<v[i].second<<endl;
	}
	return 0;
}