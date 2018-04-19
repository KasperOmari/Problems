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
int main(){
//	freopen("a.txt","r",stdin);
	int n,m,a,b,c,sol;
	vector<pair<int,pair<int,int> > >v;
	vector<int>indx;
	while(scanf("%d%d",&n,&m),(n||m)){
		v.clear();
		sol=0;
		indx.clear();
		for(int i=0;i<n;i++)indx.push_back(i);
		for(int i=0;i<m;i++){
			scanf("%d%d%d",&a,&b,&c);
			v.push_back(make_pair(a,make_pair(b,c)));
		}
		int x,y;
		bool f;
		do{
			f=1;
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(v[i].first==indx[j]){
						x=j;
						break;
					}
				}
				for(int j=0;j<n;j++){
					if(v[i].second.first==indx[j]){
						y=j;
						break;
					}
				}
				if(v[i].second.second>0){
					if(abs(x-y)>v[i].second.second){
						f=0;
						break;
					}
				}
				else if(v[i].second.second<0){
					if(abs(x-y)<(-v[i].second.second)){
						f=0;
						break;
					}
				}
			}
			if(f)sol++;
		}while(next_permutation(indx.begin(),indx.end()));
		printf("%d\n",sol);
	}
	return 0;
}