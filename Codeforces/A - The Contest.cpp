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
#define N 100010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
int a;
int main(){
	int n,m,x=0,l,r,sol=-1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		x+=a;
	}
	scanf("%d",&m);
	for(int j=0;j<m;j++){
		scanf("%d%d",&l,&r);
		if(r>=x){
			sol=max(l,x);
			break;
		}
	}
	printf("%d\n",sol);
	return 0;
}