#include <bits/stdc++.h>
using namespace std;
int n,k,a[100005],t[100005],sol,mx=-1e9,cum[100005];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	cin >>n>>k;
	for(int i=0;i<n;++i){
		cin >>a[i];
	}
	for(int i=0;i<n;++i){
		cin >>t[i];
		if(t[i])sol+=a[i];
		else cum[i+1]=a[i];
		cum[i+1]+=cum[i];
	}
	int l=-1,r=-1;
	for(int i=k-1;i<=n;++i)
		mx=max(mx,cum[i+1]-cum[i-k+1]);
	sol+=mx;
	cout <<sol<<endl;
	return 0;
}