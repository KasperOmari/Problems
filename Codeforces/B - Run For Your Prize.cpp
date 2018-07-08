#include <bits/stdc++.h>
using namespace std;
int n,me=1,frnd=1e6,sol,a;
int main(){
	scanf("%d",&n);
	for(int i=0,x;i<n;++i){
		scanf("%d",&x);
		if(x<=500000)
			me=x;
		else{
			frnd=x;
			break;
		}
	}
	printf("%d\n",max(me-1,1000000-frnd));
	return 0;
}