#include <bits/stdc++.h>
using namespace std;
int n,x,h,sol=2;
const int N=1e5+5;
pair<int,int>v[N];
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i) scanf("%d%d",&v[i].first,&v[i].second);
	if(n==1)return puts("1"),0;
	for(int i=1;i<n-1;++i){
		if(v[i].first-v[i].second>v[i-1].first)++sol;
		else if(v[i].first+v[i].second<v[i+1].first){
			++sol;
			v[i].first+=v[i].second;
		}
	}
	printf("%d\n",sol);
	return 0;
}