#include <bits/stdc++.h>
using namespace std;
int n,l,r,k;
string s,a,b;
int main(){
	cin >>s>>n;
	int len;
	while(n--){
		scanf("%d%d%d",&l,&r,&k);
		--l,--r;
		len=r-l+1;
		k%=len;
		s.insert(l,s.substr(r-k+1,k));
		s.erase(r+1,k);
	}
	cout <<s<<endl;
	return 0;
}