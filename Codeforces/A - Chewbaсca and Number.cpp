#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
string s;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	cin >>s;
	char c;
	for(int i=s.size()-1;i>0;--i){
		c=s[i];
		if(9-(s[i]-'0')<s[i]-'0'&&9-(s[i]-'0')>=0){
			s[i]='9';
			s[i]-=c-'0';
		}
	}
	c=s[0];
	if(9-(s[0]-'0')<s[0]-'0'&&9-(s[0]-'0')>0){
		s[0]='9';
		s[0]-=c-'0';
	}
	printf("%s\n",s.c_str());
	return 0;
}