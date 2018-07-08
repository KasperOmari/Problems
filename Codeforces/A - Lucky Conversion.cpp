#include <bits/stdc++.h>
using namespace std;
char a[100005],b[100005];
int as,bs;
int main(){
	scanf("%s%s",a,b);
	int n=strlen(a);
	for(int i=0;i<n;++i){
		if(a[i]!=b[i]){
			as+=a[i]=='4';
			bs+=b[i]=='4';
		}
	}
	printf("%d\n",max(as,bs));
	return 0;
}