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
int dx[]={0, 0,1,-1, 1, 1, -1,-1};
int dy[]={1,-1,0, 0, 1,-1, -1, 1};
vector<string> g;
void DFS(int i,int j){
	g[i][j]='#';
	for(int k=0;k<8;++k){
		int x=i+dx[k],y=j+dy[k];
		if(x>=0&&y>=0&&y<g[i].length()&&x<g.size()&&g[x][y]==' ')
			DFS(x,y);
	}
}
int main(){
	//freopen("a.txt","r",stdin);
	string s;
	cin >>n;
	cin.ignore();
	while(n--){
		g.clear();
		int i=0,j=0;
		while(getline(cin,s)&&s[0]!='_')
			g.push_back(s);
		for(int i=0;i<g.size();++i)
			for(int j=0;j<g[i].length();++j){
				if(g[i][j]=='*')
					DFS(i,j);
			}
		for(int i=0;i<g.size();++i,puts(""))
			for(int j=0;j<g[i].length();++j)
				cout<<g[i][j];
		cout<<s<<endl;
	}
	return 0;
}