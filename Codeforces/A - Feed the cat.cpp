#include <bits/stdc++.h>
using namespace std;
double hh,mm,h,d,c,n;
int main(){
	scanf("%lf%lf%lf%lf%lf%lf",&hh,&mm,&h,&d,&c,&n);
	hh*=60;
	if(hh+mm>=1200){
		printf("%.6lf\n",ceil(h/n)*(c*0.8));
	}else{
		int w=1200-(hh+mm);
		printf("%.6lf\n",min(ceil(h/n)*c,ceil((h+(w*d))/n)*(c*0.8)));
	}
	return 0;
	
}