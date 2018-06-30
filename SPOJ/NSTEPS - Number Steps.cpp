#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<utility>
#include<iomanip>
#include<bitset>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
//	freopen("a.txt","r",stdin);
int n,x,y;
scanf("%d",&n);
while(n--){
	scanf("%d%d",&x,&y);
	if(x==y){
		if(x%2==0)printf("%d\n",x*2);
		else printf("%d\n",x*2-1);
	}
	else if(x-2==y){
		if(x%2==0)printf("%d\n",x+y);
		else printf("%d\n",x+y-1);
	}
	else puts("No Number");
}
return 0;
} 
