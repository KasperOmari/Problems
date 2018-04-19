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
	int t,n,sol;
	scanf("%d",&t);
	while(t--){
		sol=1e9;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			for(int j=1;j*i<=n;j++){
				for(int k=1;k*j*i<=n;k++)
					if(i*j*k==n)
						sol=min(sol,i*j+i*k+j*k);
			}
		}
		printf("%d\n",sol*2);
	}
	return 0;
}