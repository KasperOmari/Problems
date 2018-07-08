#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long int ll;
#define pb push_back
#define MP make_pair
vector<vector<pair<int,ll> > >g;
int n,m,k,a,b,w;
ll sol;
int per[100005];
bool vis[100005];
ll cost[100005];
priority_queue<pair<pair<ll,int>,bool> >q;
void dik(int src){
	memset(per,-1,sizeof per);
	fill(cost,cost+100005,1e18);

	q.push(MP(MP(0,src),0));
	cost[src]=0;
	while(!q.empty()){
		int v=q.top().first.second;
		ll c=-q.top().first.first;
		bool tr=q.top().second;
		q.pop();
		if(cost[v]<=c&&tr){
			++sol;
			continue;
		}else if(cost[v]>c&&tr)cost[v]=c;
		if(vis[v])continue;
		vis[v]=1;
		for(int i=0;i<g[v].size();++i){
			int u=g[v][i].first;
			if(c+g[v][i].second<cost[u]){
				cost[u]=c+g[v][i].second;
				q.push(MP(MP(-cost[u],u),0));
			}
		}
	}
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d%d%d",&n,&m,&k);
	g.resize(n+1);
	while(m--){
		scanf("%d%d%d",&a,&b,&w);
		--a,--b;
		g[a].pb(MP(b,w));
		g[b].pb(MP(a,w));
	}
	while(k--){
		scanf("%d%d",&a,&b);
		--a;
		q.push(MP(MP(-b,a),1));
	}
	dik(0);
	printf("%I64d\n",sol);
	return 0;
}