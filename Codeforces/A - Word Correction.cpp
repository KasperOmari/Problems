#include <bits/stdc++.h>
using namespace std;
int n;
string s,sol;
char vo[]={'a','i','y','o','u','e'};
bool ch(char c){
	for(int j=0;j<6;++j)
		if(c==vo[j])
			return 1;
	return 0;
}
int main(){
	scanf("%d",&n);
	cin >>s;
	for(int i=s.size()-1;i>=0;--i){
		if(ch(s[i-1])&&ch(s[i]))continue;
		sol+=s[i];
	}
	reverse(sol.begin(),sol.end());
	cout <<sol<<endl;
	return 0;
}