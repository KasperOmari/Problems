#include <bits/stdc++.h>
using namespace std;
int h1,a1,c1,a2,h2,n;
string sol;
int main(){
	scanf("%d%d%d%d%d",&h1,&a1,&c1,&h2,&a2);
	while(h2>0){
		if(h1<=a2&&h2>a1){
			h1+=c1;
			sol+="HEAL\n";
		}
		else{
			h2-=a1;
			sol+="STRIKE\n";
		}
		h1-=a2,++n;
	}
	printf("%d\n%s",n,sol.c_str());
	return 0;
}