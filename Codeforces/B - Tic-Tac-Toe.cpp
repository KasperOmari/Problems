#include <bits/stdc++.h>
using namespace std;
vector<string>s;
string t;
int n,m;
void fillAll(){
	for(int i=0;i<11;++i){
		for(int j=0;j<11;++j){
			if(s[i][j]=='.')
				s[i][j]='!';
		}
	}
}
void fillIn(int I,int J){
	for(int i=I;i<I+3;++i){
		for(int j=J;j<J+3;++j)
			if(s[i][j]=='.')
				s[i][j]='!';
	}
}
bool check(int I,int J){
	for(int i=I;i<I+3;++i){
		for(int j=J;j<J+3;++j)
			if(s[i][j]=='.')
				return 1;
	}	
	return 0;
}
pair<int,int> whereis(){
	if(n%3==0&&m%3==0)return make_pair(0,0);
	if(n%3==0&&m%3==1)return make_pair(0,4);
	if(n%3==0&&m%3==2)return make_pair(0,8);
	if(n%3==1&&m%3==0)return make_pair(4,0);
	if(n%3==1&&m%3==1)return make_pair(4,4);
	if(n%3==1&&m%3==2)return make_pair(4,8);
	if(n%3==2&&m%3==0)return make_pair(8,0);
	if(n%3==2&&m%3==1)return make_pair(8,4);
	if(n%3==2&&m%3==2)return make_pair(8,8);
}
int main(){
	for(int i=0;i<11;++i){
		getline(cin,t);
		s.push_back(t);
	}
	scanf("%d%d",&n,&m);
	--n,--m;
	pair<int,int>pos=whereis();
	if(check(pos.first,pos.second))
		fillIn(pos.first,pos.second);
	else fillAll();
	for(int i=0;i<11;++i)
			cout <<s[i]<<endl;
	return 0;
}