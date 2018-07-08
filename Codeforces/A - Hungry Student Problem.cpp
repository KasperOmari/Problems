#include <bits/stdc++.h>
using namespace std;
int n,x;
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		int f=x/3;
		int c=ceil(2*(double)x/7);
		puts(f>=c?"YES":"NO");
	}
	return 0;
}