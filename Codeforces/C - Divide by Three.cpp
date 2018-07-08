#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int dp[100005][5][2];
string s,res="";
int calc(int indx,int mod,bool take){
	if(indx==(int)s.size())return mod==0?0:1e9;

	int &ret=dp[indx][mod][take];
	if(ret!=-1)return ret;
	ret=1+calc(indx+1,mod,take);
	if(s[indx]=='0'){
		if(take)
			ret=min(ret,calc(indx+1,(mod*10+(s[indx]-'0'))%3,1));
	}else ret=min(ret,calc(indx+1,(mod*10+(s[indx]-'0'))%3,1));
	return ret;
}
void build(int indx,int mod,bool take){
	if(indx>=s.size())return;
	int ret=dp[indx][mod][take];
	if(ret==calc(indx+1,mod,take)+1){
		build(indx+1,mod,take);
		return;
	}else{
		if(s[indx]=='0'){
			if(take){
				if(ret==calc(indx+1,(mod*10+(s[indx]-'0'))%3,1)){
					res+='0';
					build(indx+1,(mod*10+(s[indx]-'0'))%3,1);
					return;
				}
			}
		}else{
			if(ret==calc(indx+1,(mod*10+(s[indx]-'0'))%3,1)){
				res+=s[indx];
				build(indx+1,(mod*10+(s[indx]-'0'))%3,1);
				return;
			}
		}
	}
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	memset(dp,-1,sizeof dp);
	cin >>s;
	int sol=calc(0,0,0);
	if(sol>=s.size()){
		for(int i=0;i<s.size();++i){
			if(s[i]=='0'){
				puts("0");
				return 0;
			}
		}
		puts("-1");
	}else{
		build(0,0,0);
		printf("%s\n",res.c_str());
	}
	return 0;
}