#include <bits/stdc++.h>
using namespace std;
int n,k,a[200005];
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;++i)
		scanf("%d",a+i);
	sort(a,a+n);
	if(!k&&a[0]>1)printf("%d\n",a[0]-1);
	else if(!k||a[k-1]==a[k])puts("-1");
	else printf("%d\n",a[k-1]);
	return 0;
}