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
int crm[]={561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973};
int n;
int main(){
	//freopen("a.txt","r",stdin);
	while(scanf("%d",&n),n!=0){
		bool f=0;
		for(int i=0;i<15;++i)
			if(crm[i]==n){
				f=1;
				break;
			}
		if(f)printf("The number %d is a Carmichael number.\n",n);
		else printf("%d is normal.\n",n);
	}
	return 0;
}