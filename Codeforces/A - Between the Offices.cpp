#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,sf,fs;
string s;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	cin >>n>>s;
	for(int i=1;i<n;++i){
		if(s[i]=='F'&&s[i-1]=='S')++sf;
		else if(s[i]=='S'&&s[i-1]=='F')++fs;
	}
	if(sf>=1&&sf>fs)puts("YES");
	else puts("NO");
	return 0;
}