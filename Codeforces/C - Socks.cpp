#include <bits/stdc++.h>
using namespace std;
int n,m,k,c[200005],l,r,cc,mx,sol;
map<int,int>frq;
bool vis[200005];
vector<vector<int> >g;
void dfs(int u){
	vis[u]=1;
	++frq[c[u]];
	++cc;
	mx=max(mx,frq[c[u]]);
	for(int i=0;i<g[u].size();++i)
		if(!vis[g[u][i]])
			dfs(g[u][i]);
}
int main(){
	scanf("%d%d%d",&n,&m,&k);
	g.resize(n);
	for(int i=0;i<n;++i)scanf("%d",c+i);
	while(m--){
		scanf("%d%d",&l,&r);
		--l,--r;
		g[l].push_back(r);
		g[r].push_back(l);
	}
	for(int i=0;i<n;++i){
		if(!vis[i]){
			mx=cc=0;
			frq.clear();
			dfs(i);
			sol+=cc-mx;
		}
	}
	printf("%d\n",sol);
	return 0;
}