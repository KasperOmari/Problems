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
vector<int>a,b,v,sol;
int main(){
	//freopen("a.txt","r",stdin);
	int n,k,x,mn=1e9,f;
	scanf("%d%d",&n,&k);
	b.resize(n);
	a.resize(n);
	for(int i=0;i<n;++i)scanf("%d",&a[i]);
	for(int i=0;i<n;++i)scanf("%d",&b[i]);
	for(int i=0;i<n;++i){
		v.push_back(b[i]/a[i]);
		mn=min(mn,b[i]/a[i]);
	}
	x=0;
	while(k){
		if(x==n){mn++;x=0;}
		if(v[x]==mn){
			f=min((mn+1)*a[x]-b[x],k);
			b[x]+=f;
			v[x]=b[x]/a[x];
			k-=f;
		}
		x++;
	}
	printf("%d\n",v[min_element(v.begin(),v.end())-v.begin()]);
	return 0;
}