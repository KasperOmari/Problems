#include <bits/stdc++.h>
using namespace std;
int n,a[101];
long long sol=1;
vector<int>v;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",a+i);
		if(a[i])
			v.push_back(i);
	}
	if(v.empty())return puts("0"),0;
	if(v.size()==0)return puts("1"),0;
	for(int i=1;i<(int)v.size();++i)
		sol*=v[i]-v[i-1];
	printf("%lld\n",sol);
	return 0;
}