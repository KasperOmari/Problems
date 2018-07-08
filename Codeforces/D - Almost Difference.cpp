#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
ll sol,n;
map<ll,ll>mp;
int main(){
	scanf("%Lf",&n);
	for(ll i=0,x;i<n;++i){
		scanf("%Lf",&x);
		++mp[x];
		sol+=-x*(n-2*i-1);
		sol+=mp[x+1];
		sol-=mp[x-1];
	}
	printf("%.0Lf\n",sol);
	return 0;
}