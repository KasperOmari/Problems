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
#include<array>
#include<list>
#include<stack>
#include<utility>
#include<iomanip>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
typedef long long ll;

const int N=1e6+10;
bool prime[N];
void sieve(){
	prime[0]=prime[1]=1;
	for(int i=2;i*i<N;i++){
		if(!prime[i])
			for(int j=i*i;j<N;j+=i)
				prime[j]=1;
	}
}
int main()
{
	sieve();
	prime[1]=0;
	int n,t,x;
	while(cin >>n){
		t=n;x=0;
		while(t){
			x+=t%10;
			t/=10;
			x*=10;
		}
		x/=10;
		if(prime[n])printf("%d is not prime.\n",n);
		else{
			if(!prime[x]&&x!=n)printf("%d is emirp.\n",n);
			else printf("%d is prime.\n",n);
		}
	}

	return  0;
}