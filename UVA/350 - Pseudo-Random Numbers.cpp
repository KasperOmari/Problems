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
	int z,I,m,l,c=1;
	while(scanf("%d%d%d%d",&z,&I,&m,&l)&&(z||I||m||l)){
		int x,tmp,sol=1;
		tmp=(z*l+I)%m;
		x=(z*tmp+I)%m;
		while(x!=tmp){
			x=(z*x+I)%m;
			sol++;
		}
		printf("Case %d: %d\n",c++,sol);
	}
	return 0;
}