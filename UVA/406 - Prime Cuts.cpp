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
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
const int N=1e4;
bool pr[N];
vector<int>prime;
void sieve(){
	pr[0]=1;
	for(int i=2;i*i<N;++i)
		if(!pr[i])
			for(int j=i*i;j<N;j+=i)
				pr[j]=1;
	for(int i=1;i<N;++i)
		if(!pr[i])
			prime.push_back(i);
}
int main(){
	//freopen("a.txt","r",stdin);
	sieve();
	int n,c;
	while(scanf("%d%d",&n,&c)==2){
		int loc=upper_bound(prime.begin(),prime.end(),n)-prime.begin();
		printf("%d %d:",n,c);
		if(loc%2==0)c*=2;
		else c=c*2-1;
		if(c>loc)c=loc;
		int x=loc/2-c/2;
		for(int i=0;i<c;++i)
			printf(" %d",prime[x++]);
		puts("\n");
	}
	return 0;
}