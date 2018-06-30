#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
vector<int>v;
int t,n,k;
int fun(int i,int s,int cnt){
	if(s==k)
		return cnt;
	if(i==n)
		return 1e7;
	return min(fun(i+1,s+v[i],cnt+1),fun(i+1,s,cnt));
}
int main(){
	//freopen("a.txt","r",stdin);
	scanf("%d",&t);
	while(t--){
		v.clear();
		scanf("%d%d",&n,&k);
		v.resize(n);
		for(int i=0;i<n;++i)scanf("%d",&v[i]);
		int sol=fun(0,0,0);
		if(sol>=1e7)puts("impossible");
		else printf("%d\n",sol);
	}
	return 0;
} 
