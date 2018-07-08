#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
ll n,m;
ll k,l,r,mid,sol;
ll can(ll md){
	ll s=0;
	for(int i=1;i<=n;++i)
		s+=min(md/i,m);
	return s;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%lld%lld%lld",&n,&m,&k);
	l=0,r=n*m;
	while(l<=r){
		mid=(l+r)/2;
		if(can(mid)<k){
			sol=mid; 
			l=mid+1;
		}else r=mid-1;
	}
	printf("%lld\n",sol+1);
	return 0;
}