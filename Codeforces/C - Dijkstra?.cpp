#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long int ll;
#define pb push_back
#define MP make_pair
vector<vector<pair<int,ll> > >g;
int n,m,a,b,w;;
int per[100005];
bool vis[100005];
ll cost[100005];
priority_queue<pair<ll,int> >q;
void dik(int src){
	memset(per,-1,sizeof per);
	fill(cost,cost+100005,1e12);

	q.push(MP(0,src));
	cost[src]=0;
	while(!q.empty()){
		int v=q.top().second;
		ll c=-q.top().first;
		q.pop();
		if(vis[v])continue;
		vis[v]=1;
		for(int i=0;i<g[v].size();++i){
			int u=g[v][i].first;
			if(c+g[v][i].second<cost[u]){
				per[u]=v;
				cost[u]=c+g[v][i].second;
				q.push(MP(-cost[u],u));
			}
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d%d",&n,&m);
	g.resize(n+1);
	while(m--){
		scanf("%d%d%d",&a,&b,&w);
		--a,--b;
		g[a].pb(MP(b,w));
		g[b].pb(MP(a,w));
	}
	dik(0);
	vector<int> path;
	int v=n-1;
	while (v!=-1) {
		path.pb(v);
		v=per[v];
	}
	if(cost[n-1]==1e12)printf("-1");
	else for(int i=(int)path.size()-1;i>=0;--i)printf("%d ",path[i]+1);
	puts("");
	return 0;
}