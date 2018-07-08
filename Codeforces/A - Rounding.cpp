#include <bits/stdc++.h>
using namespace std;
int n,l;
int main(){
	scanf("%d",&n);
	l=n%10;
	if(l<=5)n-=l;
	else n+=10-l;
	printf("%d\n",n);
	return 0;
}