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
#define N 100010
#define MP make_pair
#define sci(n) scanf("%d",&n)
using namespace std;
typedef long long int ll;
typedef long double ld;
int fr[1010];
int main(){
	int t,x;
	sci(t);
	vector<int>v;
	while(t--){	
		sci(x);
		fr[x]++;
		v.push_back(x);
	}
	int bar=0;
	for(int i=1;i<=1000;i++)
		bar=max(bar,fr[i]);
	sort(v.begin(),v.end());
	v.resize(unique(v.begin(),v.end())-v.begin());
	printf("%d %d\n",bar,v.size());
	return 0;
}