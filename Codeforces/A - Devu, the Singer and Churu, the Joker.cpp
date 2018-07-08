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
	int n,m,a,s=0;
	scanf("%d%d",&n,&m);
	vector<int>v;
	while(n--){
		scanf("%d",&a);
		v.push_back(a);
		s+=a;
	}
	int x=v.size()-1;
	x*=10;
	if(s+x>m)puts("-1");
	else printf("%d\n",(m-s)/5);
	return 0;
}