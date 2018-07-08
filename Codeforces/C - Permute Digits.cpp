#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string a,s;
ll b,x;
int sz;
int main(){
	cin >>a>>b;
	x=b;while(x>0){x/=10;++sz;}
	sort(a.begin(),a.end());
	if(a.size()<sz){
		reverse(a.begin(),a.end());
		return puts(a.c_str()),0;
	}
	for(int i=0;i<a.size();++i){
		for(int j=i+1;j<a.size();++j){
			x=0,s=a;
			swap(s[i],s[j]);
			sort(s.begin()+1+i,s.end());
			stringstream ss(s);
			ss>>x;
			if(x<=b)swap(a[i],a[j]);
		}
	}
	puts(a.c_str());
	return 0;
}