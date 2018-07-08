#include <bits/stdc++.h>
using namespace std;
int n,k,i;
int main(){
	scanf("%d%d",&n,&k);
	for(i=0;i<n;++i)
		printf("%c",char((i%k)+'a'));
	puts("");
	return 0;
}