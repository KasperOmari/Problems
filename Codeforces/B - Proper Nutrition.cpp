#include <bits/stdc++.h>
using namespace std;
int n,a,b,y;
int main(){
	scanf("%d%d%d",&n,&a,&b);
	for(int x=0;x<=n;++x){
		if(x%a==0){
			y=n-x;
			if(y%b==0){
				printf("YES\n%d %d\n",x/a,y/b);
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}