#include<cstdio>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",n%2==0?(n/2)-1:n/2);
	return 0;
}