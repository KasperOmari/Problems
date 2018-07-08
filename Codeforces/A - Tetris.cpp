#include <bits/stdc++.h>
using namespace std;
int n,m,c,sol;
int fr[1001];
bool full(){
	for(int i=1;i<=n;++i)
		if(!fr[i])
			return 0;
	return 1;
}
int main(){
	cin >>n>>m;
	for(int i=0;i<m;++i){
		cin >>c;
		fr[c]++;
		if(full()){
			for(int i=1;i<=n;++i)
				fr[i]--;
			++sol;
		}
	}
	cout <<sol<<endl;
	return 0;
}