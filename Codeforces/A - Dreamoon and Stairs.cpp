#include<cstdio>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=(n+1)/2;i<=n;++i)
		if(i%m==0){
			printf("%d\n",i);
			return 0;
		}
	puts("-1");
	return 0;
}