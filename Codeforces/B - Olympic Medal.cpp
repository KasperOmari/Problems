#include <bits/stdc++.h>
using namespace std;
int n,a,p1=-1e9,r1=-1e9,p2=1e9,b;
int main(){
	scanf("%d",&n);
	while(n--){scanf("%d",&a);r1=max(r1,a);}
	scanf("%d",&n);
	while(n--){scanf("%d",&a);p1=max(p1,a);}
	scanf("%d",&n);
	while(n--){scanf("%d",&a);p2=min(p2,a);}
	scanf("%d%d",&a,&b);
	printf("%.12lf\n",double(r1*(sqrt((double)b*p1/(b*p1+a*p2)))));
	return 0;
}