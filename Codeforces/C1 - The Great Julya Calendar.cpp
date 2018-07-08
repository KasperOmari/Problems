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
#define N 2000010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
ll mx(ll n){
	ll x=0;
	while(n){
		x=max(x,n%10);
		n/=10;
	}
	return x;
}
int main(){
	ll n,t;
	scanf("%lld",&n);
	t=n;
	ll sol=0;
	while(n){
		sol++;
		n-=mx(n);
	}
	printf("%lld\n",sol);
	return 0;
}