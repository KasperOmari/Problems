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
bool shit(ll x,ll y){
	ll sum=0,t=x;
	while(x){
		sum+=x%10;
		x/=10;
	}
	return t-sum>=y;
}
int main(){
	ll n,s;
	scanf("%lld%lld",&n,&s);
	ll sol=0,i;
	for(i=s;i<=min(n,s+1000000);i++){
		if(shit(i,s))
			sol++;
	}
	sol+=n-i+1;
	if(sol<0)sol=0;
	printf("%lld\n",sol);
	return 0;
}