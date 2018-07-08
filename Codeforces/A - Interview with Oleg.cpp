#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n;
string s;
vector<string> v;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	cin >>n>>s;
	for(int i=0;i<n;++i){
		if(s[i]=='o'&&s[i+1]=='g'&&s[i+2]=='o'){
			printf("***");
			i+=3;
			while(s[i]=='g'&&s[i+1]=='o')i+=2;
			--i;
		}else printf("%c",s[i]);
	}
	puts("");
	return 0;
}