#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	string s,t="";
	for(int i=0;i<n;++i){cin >>s;t+=s;}
	s=t;
	reverse(s.begin(),s.end());
	puts(t==s?"YES":"NO");
	return 0;
}