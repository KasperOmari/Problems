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
	int n,a;
	vector<int>v,v2,v3;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&a);
		if(a==1)v.push_back(i);
		else if(a==2)v2.push_back(i);
		else v3.push_back(i);
	}
	int mn=min(v.size(),min(v2.size(),v3.size()));
	printf("%d\n",mn);
	for(int i=0;i<mn;++i)
		printf("%d %d %d\n",v[i],v2[i],v3[i]);
	return 0;
}