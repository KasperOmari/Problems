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
int dx[]={0,0,1,-1,1,-1,-1,1};
int dy[]={1,-1,0,0,1,-1,1,-1};
int dir1[]={'^','>','v','<'};
int dir2[]={'^','<','v','>'};
int main(){
	//freopen("a.txt","r",stdin);
	char a,b;
	cin >>a>>b;
	int n,t;
	cin >>n;
	n%=4;
	t=n;
	int i=0;
	while(a!=dir1[i])
		++i;
	while(n--){
		++i;
		i%=4;
	}
	bool f=0;
	if(b==dir1[i])
		f=1;
	i=0;
	while(a!=dir2[i])
		++i;
	while(t--){
		++i;
		i%=4;
	}
	bool f2=0;
	if(b==dir2[i])
		f2=1;
	if(f&&f2)puts("undefined");
	else if(f)puts("cw");
	else if(f2)puts("ccw");
	
	return 0;
}