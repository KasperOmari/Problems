#include <bits/stdc++.h>
using namespace std;
int n,a,sol;
map<int,int>mp;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a);
		sol=max(sol,++mp[a]);
	}
	printf("%d\n",sol);
	return 0;
}