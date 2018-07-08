#include <bits/stdc++.h>
using namespace std;
int n,k,l,c,d,p,nl,np;
int main(){
	scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
	printf("%d\n",min(min(p/np,(c*d)),(k*l/nl))/n);
	return 0;
}