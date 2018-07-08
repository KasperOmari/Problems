#include <bits/stdc++.h>
using namespace std;
int n,a;
string s,sol="181010110101181010110101191010110101181010110101181010110101";
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		s+=a%10+'0';
	}
	puts(sol.find(s)==sol.npos?"No\n":"Yes\n");
	return 0;
}