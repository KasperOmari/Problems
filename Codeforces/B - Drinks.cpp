#include<cstdio>
using namespace std;
int main(){
	int n,x;
	scanf("%d",&n);
	double sol=0;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		sol+=x;
	}
	printf("%.12lf\n",sol/n);
	return 0;
}