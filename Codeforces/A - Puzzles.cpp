#include <bits/stdc++.h>
using namespace std;
int n,m,sol=1e9;
int v[55];
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;++i)
		scanf("%d",&v[i]);
	sort(v,v+m);
	int l=0,r=n-1;
	while(r<m)
		sol=min(sol,(v[r++]-v[l++]));
	printf("%d\n",sol);
	return 0;
}