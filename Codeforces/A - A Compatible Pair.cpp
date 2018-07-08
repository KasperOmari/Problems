#include <bits/stdc++.h>
using namespace std;
int n,m,x;
vector<int>v;
vector<long long>vs(55,-2e18);
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		v.push_back(x);
	}
	for(int i=0;i<m;++i){
		scanf("%d",&x);
		for(int j=0;j<n;++j)
			vs[j]=max(vs[j],1LL*v[j]*x);
	}
	sort(vs.begin(),vs.end());
	x=vs.size()-2;
	printf("%lld\n",vs[x]);
	return 0;
}