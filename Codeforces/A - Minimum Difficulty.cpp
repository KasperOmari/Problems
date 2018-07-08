#include <bits/stdc++.h>
using namespace std;
int n,a[101],sol=1e9,mx=0;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i)scanf("%d",a+i);
	for(int i=1;i<n-1;++i){
		mx=0;
		for(int j=1;j<n;++j)
			mx=i==j?max(mx,a[j+1]-a[j-1]):max(mx,a[j]-a[j-1]);
		sol=min(mx,sol);
	}
	printf("%d\n",sol);
	return 0;
	
}