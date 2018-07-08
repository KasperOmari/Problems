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
int n,m;

int main(){
	//freopen("a.txt","r",stdin);
	scanf("%d%d",&n,&m);
	vector<int>v;
	vector<vector<int>>vv;
	for(int i=1;i<=n;++i)
		v.push_back(i);
	int mx=-1e9,s=0;
	do{
		s=0;
		for(int i=0;i<n;++i){
			int c=v[i];
			s+=v[i];
			for(int j=i+1;j<n;++j){
				c=min(c,v[j]);
				s+=c;
			}
		}
		if(s>mx){
			mx=s;
			vv.clear();
			vv.push_back(v);
		}
		else if(s==mx)
			vv.push_back(v);
	}while(next_permutation(v.begin(),v.end()));
	for(int i=0;i<n;++i)
		printf("%d " ,vv[m-1][i]);
	puts("");
	return 0;
}