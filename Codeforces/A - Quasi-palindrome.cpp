#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
string s;
bool isPal(){
	for(int i=0;i<(int)s.size()/2;++i){
		if(s[i]!=s[(int)s.size()-i-1])
			return 0;
	}
	return 1;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	cin >>s;
	if(isPal()){
		puts("YES");
		return 0;
	}
	string t="";
	for(int i=s.size()-1;i>=0;--i){
		if(s[i]!='0')break;
		t+='0';
	}
	s=t+s;
	puts(isPal()?"YES":"NO");
	return 0;
}