#include <bits/stdc++.h>
using namespace std;
int n,m,a,i=1;
long long sol;
int main(int argc, char const *argv[]){
	scanf("%d%d",&n,&m);
	for(int j=1;j<=m;++j){
		scanf("%d",&a);
		if(a>=i)sol+=a-i;
		else sol+=n-(i-a);
		i=a;
	}
	printf("%lld\n",sol);
	return 0;
}