#include <bits/stdc++.h>
using namespace std;
const double epsln=-1e-8;
int n,k,sol;
int main(){
	scanf("%d%d",&n,&k);
	for(int x,i=0;i<n;++i){
		scanf("%d",&x);
		if(5-x>=k)++sol;
	}
	printf("%d\n",sol/3);
	return 0;
}