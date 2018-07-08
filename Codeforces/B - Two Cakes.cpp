#include <bits/stdc++.h>
using namespace std;
int n,a,b,sol;
int main(){
	cin >>n>>a>>b;
	for(int i=1;i<n;++i)
		sol=max(sol,min(a/i,b/(n-i)));
	cout <<sol<<endl;
	return 0;
}