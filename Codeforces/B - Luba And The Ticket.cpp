#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
typedef long long int ll;
string s,t;
int sum,ss,mn=1e9;
char ch[8];
void clac(int i){
	if(i==6){
		ss=0;sum=0;
		for(int k=0;k<3;++k)ss+=t[k]-'0';
		for(int k=3;k<6;++k)sum+=t[k]-'0';
		if(ss==sum){
			int c=0;
			for(int k=0;k<6;++k)
				if(t[k]!=s[k])
					++c;
			mn=min(mn,c);
		}
		return;
	}
	for(int k=0;k<10;++k){
		t+=(char)k+'0';
		clac(i+1);
		t.erase(t.size()-1,1);
	}
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%s",ch);
	s=ch;
	clac(0);
	printf("%d\n",mn);
	return 0;
}