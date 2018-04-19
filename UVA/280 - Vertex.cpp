#define _CRT_SECURE_NO_WARNINGS
#includeiostream
#includestring
#includecmath
#includememory.h
#includecctype
#includealgorithm
#includeset
#includemap
#includequeue
#includedeque
#includelist
#includestack
#includeutility
#includeiomanip
#includebitset
#includevector
#includecassert
#includecstdio
#includecstdlib
#includesstream
#includecstring
using namespace std;
typedef long long int ll;
typedef long double ld;
int n,q,x;
int dx[]={0, 0,1,-1, 1, 1, -1,-1};
int dy[]={1,-1,0, 0, 1,-1, -1, 1};
vectorvectorint g;
vectorintsol;
bool vis[101];
void DFS(int v){
	  for(int i=0;ig[v].size();++i){
		  if(!vis[g[v][i]]){
			  vis[g[v][i]]=1;
			  DFS(g[v][i]);
		  }
	  }
}
int main(){
	freopen(a.txt,r,stdin);
	while(scanf(%d,&n),n){
		g.clear();
		g.resize(n);
		while(scanf(%d,&x),x)
			while(scanf(%d,&q),q)
				g[x-1].push_back(q-1);
		scanf(%d,&x);
		while(x--){
			sol.clear();
			memset(vis,0,sizeof vis);
			scanf(%d,&q);
			DFS(q-1);
			for(int i=0;in;++i)
				if(!vis[i])
					sol.push_back(i+1);
			printf(%d,(int)sol.size());
			for(int i=0;i(int)sol.size();++i)
				printf( %d,sol[i]);
			puts();
		}
	}
	return 0;
}