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
int main(){
	//freopen("a.txt","r",stdin);
	int l,r,x,y;
	double k;
	bool f=0;
	scanf("%d%d%d%d%lf",&l,&r,&x,&y,&k);
	for(int i=x;i<=y;++i){
		if(i*k>=l&&i*k<=r){
			f=1;
			break;
		}
	}
	puts(f?"YES":"NO");
	return 0;
}