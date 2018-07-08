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
int fr[6];
int main(){
	//freopen("a.txt","r",stdin);
	int n;
	scanf("%d",&n);
	for(int a,i=0;i<n;++i){
		scanf("%d",&a);
		++fr[a];
	}
	for(int a,i=0;i<n;++i){
		scanf("%d",&a);
		--fr[a];
	}
	int sol=0;
	for(int i=1;i<=5;++i){
		if(fr[i]%2){
			puts("-1");
			return 0;
		}
		if(fr[i]>0)sol+=fr[i];
	}
	printf("%d\n",sol/2);
	return 0;
}