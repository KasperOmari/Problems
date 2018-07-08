#include <bits/stdc++.h>
using namespace std;
int n,a,f[3],sol;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a);
		f[a]++;
	}
	if(f[1]<=f[2])
		printf("%d\n",f[1]);
	else
		printf("%d\n",f[2]+(f[1]-f[2])/3);
	return 0;
}