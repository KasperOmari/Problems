#include <bits/stdc++.h>
using namespace std;
int n,a[100005],mn=1e9,sol=1e9;
pair<int,int>mis[100005];
int main(){
	cin >>n;
	int j=-1;
	for(int i=0;i<n;++i){
		cin >>a[i];
		mn=min(mn,a[i]);
	}
	int x=0;
	for(int i=0;i<n;++i)
		if(a[i]==mn){
			mis[x].first=mn;
			mis[x++].second=i;
		}

	for(int i=1;i<x;++i){
		sol=min(sol,mis[i].second-mis[i-1].second);
	}
	cout <<sol<<endl;
	return 0;
}