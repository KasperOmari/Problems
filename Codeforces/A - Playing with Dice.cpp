#include <bits/stdc++.h>
using namespace std;
int a,b,awin,bwin,d;
int main(){
	scanf("%d%d",&a,&b);
	for(int i=1;i<=6;++i){
		if(abs(a-i)==abs(b-i))++d;
		else if(abs(a-i)>abs(b-i))++bwin;
		else ++awin;
	}
	printf("%d %d %d\n",awin,d,bwin);
	return 0;
}