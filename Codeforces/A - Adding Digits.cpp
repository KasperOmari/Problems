#include <bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	a*=10;
	int i;
	for(i=0;i<10;++i)
		if((a+i)%b==0)
			break;
	if(i==10)
		puts("-1");
	else{
		printf("%d",a+i);
		while(--n)printf("0");
		puts("");
	}
	return 0;
}