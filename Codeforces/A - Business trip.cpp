#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,sol,s;
int v[15];
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d",&n);
	for(int i=0;i<12;++i)scanf("%d",&v[i]);
	sort(v,v+12);
	for(int i=11;i>=0;--i){
		if(s>=n)break;
		s+=v[i];
		++sol;
	}
	if(s<n)puts("-1");
	else printf("%d\n",sol);
	return 0;
}