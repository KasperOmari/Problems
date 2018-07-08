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
vector<pair<int,int> >v;
int main(){
	//freopen("a.txt","r",stdin);
	int n,a,b;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	int sol=-1e9;
	for(int i=0;i<(int)v.size();++i)
		if(v[i].second<sol)sol=v[i].first;
		else sol=v[i].second;
	printf("%d\n",sol);
	return 0;
}