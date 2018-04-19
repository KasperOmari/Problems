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
#define N 1000010
#define MP make_pair
#define sci(n) scanf("%d",&n)
using namespace std;
typedef long long int ll;
typedef long double ld;
ll sol[N];
int main(){
	sol[6]=1;
	for(int i=1;i<=3;i++)
		for(int j=6;j<=N;j++)
			sol[i+j]+=sol[j];
	int cas=1,n;
	while(sci(n),n)printf("Case %d: %lld\n",cas++,sol[n]);
	return 0;
}