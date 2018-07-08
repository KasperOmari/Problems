#include<cstdio>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
		if(n%i==0){
			n=i;
			printf("%d ",i);
		}
	puts("");
	return 0;
}