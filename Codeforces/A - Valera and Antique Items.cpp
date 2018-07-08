#include <bits/stdc++.h>
using namespace std;
const double epsln=-1e-8;
int n,v,k,s;
vector<int>sol;
int main(){
	scanf("%d%d",&n,&v);
	for(int j=1;j<=n;++j){
		scanf("%d",&k);
		bool f=0;
		for(int i=0;i<k;++i){
			scanf("%d",&s);
			if(s<v)f=1;
		}
		if(f)sol.push_back(j);
	}
	printf("%d\n",(int)sol.size());
	for(int i=0;i<sol.size();++i)
		printf("%d ",sol[i]);
	puts("");
	return 0;
}