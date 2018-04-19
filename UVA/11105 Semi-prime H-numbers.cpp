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
#define pr(n,x) printf("%d %d\n",n,x)
using namespace std;
typedef long long int ll;
typedef long double ld;
bool hprime[N],sim[N];
void hsieve(){
	memset(hprime,1,sizeof hprime);
	for(int i=5;i<N;i+=4){
		if(hprime[i])
			for(int j=i+i;j<N;j+=i)
				hprime[j]=0;
			
	}
}
void simi(){
	for(int i=5;i<N;i+=4)
		for(int j=i;(ll)i*(ll)j<N;j+=4)
			if(hprime[i]&&hprime[j]&&!sim[i*j])
				sim[i*j]=1;
}
int cum[N];
int main(){
	hsieve();
	simi();
	for(int i=1;i<N;i++)
		cum[i]=cum[i-1]+sim[i];
	int n;
	while(sci(n)&&n){
		pr(n,cum[n]);
	}
	return 0;
}