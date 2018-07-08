#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	scanf("%d%d",&n,&m);
	printf("%d\n",m%(int)pow(2.0,n));
	return 0;
}