#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<utility>
#include<iomanip>
#include<bitset>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
typedef long long int ll;
typedef long double ld;
int n,m,x;
string s,t[1000];
vector<string>v;
void print(int indx){
	if(indx==(int)s.size()){
		for(int i=0;i<(int)s.size();++i)
			printf("%s",t[i].c_str());
		puts("");
	}
	else{
		if(s[indx]=='#'){
			for(int i=0;i<(int)v.size();++i){
				t[indx]=v[i];
				print(indx+1);
			}
		}
		else {
			for(int i=0;i<10;++i){
				t[indx]=(char)(i+'0');
				print(indx+1);
			}
		}
	}
}
int main(){
	//freopen("a.txt","r",stdin);
	while(scanf("%d",&n)!=EOF){
		v.clear();
		while(n--){
			cin >>s;
			v.push_back(s);
		}
		puts("--");
		scanf("%d",&m);
		while(m--){
			cin >>s;
			print(0);
		}
	}
	return 0;
}