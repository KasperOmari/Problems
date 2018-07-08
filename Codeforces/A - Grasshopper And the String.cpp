#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,lo,sol;
string s;
vector<int>v;
bool ok(char ch){
	return ch=='A'||ch=='O'||ch=='Y'||ch=='U'||ch=='E'||ch=='I';
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	cin >>s;
	v.pb(-1);
	for(int i=0;i<s.size();++i){
		if(ok(s[i]))
			v.pb(i);
	}
	v.pb(s.size());
	for(int i=0;i<v.size()-1;++i){
		sol=max(sol,v[i+1]-v[i]);
	}
	cout <<sol<<endl;
	return 0;
}