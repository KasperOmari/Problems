#include <bits/stdc++.h>
using namespace std;
int n,m[100005],mx[100005],l;
long long sol;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i)scanf("%d",m+i);
	mx[0]=m[0];
	for(int i=1;i<n;++i)mx[i]=max(mx[i-1],m[i]);
	l=mx[n-1];
	for(int i=n-1;i>=0;--i){
		if(l>mx[i])--l;
		sol+=l-m[i];
	}
	printf("%lld\n",sol);
	return 0;
	
}