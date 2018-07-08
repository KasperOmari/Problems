#include <bits/stdc++.h>
using namespace std;
int n,a,mx=-1;
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		mx=max(mx,a);
	}
	printf("%d\n",max(0,mx-25));
	return 0;
}