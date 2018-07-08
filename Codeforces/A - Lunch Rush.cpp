#include <bits/stdc++.h>
using namespace std;
int n,v,k,f,t,sol=-2e9;
int main(){
	scanf("%d%d",&n,&k);
	for(int j=0;j<n;++j){
		scanf("%d%d",&f,&t);
		if(t>k)
			sol=max(sol,f-(t-k));
		else
			sol=max(sol,f);
		
	}
	printf("%d\n",sol);
	return 0;
}