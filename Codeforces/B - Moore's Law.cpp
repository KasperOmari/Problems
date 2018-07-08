#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	double sol=pow(1.000000011,t)*n;
	printf("%lf\n",sol);
	return 0;
}