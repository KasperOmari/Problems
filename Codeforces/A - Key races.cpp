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
int main(){
	//freopen("a.txt","r",stdin);
	int n,v1,v2,t1,t2;
	cin >>n>>v1>>v2>>t1>>t2;
	int x=n*v1+(2*t1);
	int y=n*v2+(2*t2);
	if(x<y)
		puts("First");
	else if(y<x)puts("Second");
	else puts("Friendship");
	return 0;
}