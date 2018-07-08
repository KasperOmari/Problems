#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n;
ll sol[2];
vector<vector<int> >g;
void dfs(int v,int u,bool f){
	++sol[f];
	for(int i=0;i<g[v].size();++i){
		int p=g[v][i];
		if(p!=u)
			dfs(p,v,!f);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	int u,v;
	scanf("%d",&n);
	g.resize(n);
	for(int i=1;i<n;++i){
		scanf("%d%d",&u,&v);
		--u,--v;
		g[u].pb(v);
		g[v].pb(u);
	}
	dfs(0,0,0);
	printf("%I64d\n",sol[0]*sol[1]-n+1);
	return 0;
}