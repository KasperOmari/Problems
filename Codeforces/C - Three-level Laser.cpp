#include <bits/stdc++.h>
using namespace std;
int n,u;
double e[100005],sol=-1.0;
int main(){
	scanf("%d%d",&n,&u);
	for(int i=0;i<n;++i)scanf("%lf",e+i);
	for(int j,k,i=0;i<n;++i){
		k=upper_bound(e,e+n,e[i]+u)-e-1;
		if(k>=n)k=n-1;
		if(k==i||k-1==i)continue;
		j=i+1;
		sol=max(sol,(e[k]-e[j])/(e[k]-e[i]));
	}
	printf("%.12lf\n",sol);
	return 0;
}