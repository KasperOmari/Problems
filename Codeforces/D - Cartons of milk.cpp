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
vector<int>th,all;
vector<pair<int,int> >sh;
int fr[10000001];
int n,m,k;
bool can(int md){
	for(int i=0;i<md;++i)++fr[sh[i].first];
	int day=0,t=k;
	for(int i=0;i<all.size();++i){
		int x=fr[all[i]];
		while(x){
			if(t==0){
				t=k;
				++day;
			}
			if(day>all[i]){
				for(int i=0;i<md;++i)--fr[sh[i].first];
				return false;
			}
			--t;
			--x;
		}
	}
	for(int i=0;i<md;++i)--fr[sh[i].first];
	return true;
}
int main(){
	//freopen("a.txt","r",stdin);
	scanf("%d%d%d",&n,&m,&k);
	for(int a,i=0;i<n;++i){
		scanf("%d",&a);
		th.push_back(a);
		++fr[a];
		all.push_back(a);
	}
	for(int a,i=1;i<=m;++i){
		scanf("%d",&a);
		sh.push_back(make_pair(a,i));
		all.push_back(a);
	}
	sort(sh.begin(),sh.end());
	reverse(sh.begin(),sh.end());
	sort(all.begin(),all.end());
	all.resize(unique(all.begin(),all.end())-all.begin());
	int l=0,r=m,md,sol=-1;
	while(l<=r){
		md=(l+r)/2;
		if(can(md)){
			sol=max(sol,md);
			l=md+1;
		}else r=md-1;
	}
	printf("%d\n",sol);
	if(sol>0){
		for(int i=0;i<sol;++i)printf("%d ",sh[i].second);
		puts("");
	}
	return 0;
}