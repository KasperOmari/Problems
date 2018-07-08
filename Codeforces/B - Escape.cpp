#include <bits/stdc++.h>
using namespace std;
const double epsln=-1e-8;
int p,d,f,t,c,sol;
double dis,a,tms;
int main(){
	scanf("%d%d%d%d%d",&p,&d,&t,&f,&c);
	dis=t*p;
	if(p>d)return puts("0"),0;
	while(dis+epsln<c){
		a=dis/(d-p);//hit
		dis+=p*a;
		tms=dis-c;
		if(epsln<tms)break;
		++sol;
		dis+=p*(a+f);
	}
	printf("%d\n",sol);
	return 0;
}