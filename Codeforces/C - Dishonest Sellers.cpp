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
const int N=1e6;
bool vis[N];
int main(){
	//freopen("a.txt","r",stdin);
	int n,k;
	ll sol=0;
	scanf("%d%d",&n,&k);
	vector<int>a,b;
	for(int x,i=0;i<n;++i){
		scanf("%d",&x);
		a.push_back(x);
	}
	for(int x,i=0;i<n;++i){
		scanf("%d",&x);
		b.push_back(x);
		sol+=x;
		b[i]=a[i]-b[i];
	}
	sort(b.begin(),b.end());
	for(int i=0;k-->0||b[i]<0;++i){
		sol+=b[i];
	}
	printf("%I64d\n",sol);
	return 0;
}