#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long int ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,l,r;
string s,tmp="";
int dp[105][8][2]; 
int calc(int indx,int mod,bool take){
	if(indx==n)return (mod==0)?0:n;
	int &res=dp[indx][mod][take];
	if(res!=-1)
		return res;
	res=calc(indx+1,mod,take)+1;
	if(s[indx]=='0')
	{
		if(take)
			res=min(res,calc(indx+1,(mod*10+(s[indx]-'0'))%8,1));
	}
	else	res=min(res,calc(indx+1,(mod*10+(s[indx]-'0'))%8,1));

	return res;
}
void build(int indx,int mod,bool take){
	if(indx==n)return;
	int &res=dp[indx][mod][take];
	if(res==calc(indx+1,mod,take)+1){
		build(indx+1,mod,take);
		return;
	}else{
		if(s[indx]=='0'){
			if(take){
				if(res==calc(indx+1,(mod*10+(s[indx]-'0'))%8,1)){
					tmp+=s[indx];
					build(indx+1,(mod*10+(s[indx]-'0'))%8,1);
					return;
				}
			}
		}
		else{
			if(res==calc(indx+1,(mod*10+(s[indx]-'0'))%8,1)){
					tmp+=s[indx];
					build(indx+1,(mod*10+(s[indx]-'0'))%8,1);
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
	n=s.size();
	int res=calc(0,0,0);
	if(res==n){
		for(int i=0;i<s.size();++i)
			if(s[i]=='0'){
				puts("YES");
				cout <<0<<endl;
				return 0;
			}
		puts("NO");
	}else{
		build(0,0,0);
		printf("YES\n%s\n",tmp.c_str());
	}
	return 0;
}