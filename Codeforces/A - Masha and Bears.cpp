#include <bits/stdc++.h>
using namespace std;
int v[5];
int main(){
	for(int i=0;i<4;++i)
		scanf("%d",v+i);
	if(v[3]>v[2]*2||v[3]*2<v[2]||v[3]>=v[1])goto nosol;	
	for(int i=0;i<2;++i)
		printf("%d\n",v[i]*2);
	printf("%d\n",max(v[2],v[3]));
	return 0;
nosol:
	puts("-1");
	return 0;
}