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
	int n;
	scanf("%d",&n);
	n*=2;
	vector<int>v;
	for(int a,i=0;i<n;++i){
		scanf("%d",&a);
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	int sol=0;
	for(int i=0;i<n/2;++i){
		if(v[n-i-1]>v[i])++sol;
	}
	puts(sol>=n/2?"YES":"NO");
	return 0;
}