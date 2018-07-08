#include <bits/stdc++.h>
using namespace std;
int n,k,m,l,mn,x,a[100005];
long long sol;
string s;
vector<int>v;
map<string,int>mp;
int main(){
	scanf("%d%d%d",&n,&k,&m);
	for(int i=0;i<n;++i){
		cin>>s;
		mp[s]=i;
	}
	for(int i=0;i<n;++i)
		cin>>a[i];
	while(k--){
		cin >>x;
		v.clear();
		mn=1e9;
		while(x--){
			cin >>l;
			--l;
			v.push_back(l);
			mn=min(mn,a[l]);
		}
		for(int i=0;i<(int)v.size();++i)
			a[v[i]]=mn;
	}
	for(int i=0;i<m;++i){
		cin >>s;
		sol+=a[mp[s]];
	}
	cout <<sol<<endl;
	return 0;
}