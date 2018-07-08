#include<cstdio>
using namespace std;
int a,b,c,sum;
int main(){
	scanf("%d%d%d",&a,&b,&c);
	while(a-1>=0&&b-2>=0&&c-4>=0){
		sum+=7;
		a--;
		b-=2;
		c-=4;
	}
	printf("%d\n",sum);
	return 0;
}