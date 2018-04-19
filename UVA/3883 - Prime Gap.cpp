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
bool prime[N];
void sieve(){
	memset(prime,1,sizeof(prime));
	prime[0]=prime[1]=0;
	for(int i=2;i*i<N;i++){
		if(prime[i])
			for(int j=i*i;j<N;j+=i)
				prime[j]=0;
	}
}
int main(){
	sieve();
	int n;
	while(scanf("%d",&n)&&n){
		if(prime[n]){
			puts("0");
			continue;
		}
		int i;
		for(i=n;i>=2;i--)
			if(prime[i])
				break;
		int j;
		for(j=n;!prime[j];j++);
		printf("%d\n",j-i);
	}
	return 0;
}