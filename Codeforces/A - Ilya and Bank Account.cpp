#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	scanf("%d",&n);
	printf("%d\n",n<0?(-n/10<((-n%10)+-n/100*10))?-(-n/10):-((-n%10)+-n/100*10):n);
	return 0;
}