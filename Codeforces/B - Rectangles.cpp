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
	int n,m;
	ll sol=0,z,o;
	scanf("%d%d",&n,&m);
	vector<vector<int> >v(n);
	sol+=n*m;
	for(int a,i=0;i<n;++i){
		z=o=0;
		for(int j=0;j<m;++j){
			scanf("%d",&a);
			v[i].push_back(a);
			if(a)++o;
			else ++z;
		}
		if(o>1)sol+=pow(2,o)-(o+1);
		if(z>1)sol+=pow(2,z)-(z+1);
	}
	for(int i=0;i<m;++i){
		z=o=0;
		for(int j=0;j<n;++j){
			if(v[j][i])++o;
			else ++z;
		}
		if(o>1)sol+=pow(2,o)-(o+1);
		if(z>1)sol+=pow(2,z)-(z+1);
	}
	printf("%I64d\n",sol);
	return 0;
}