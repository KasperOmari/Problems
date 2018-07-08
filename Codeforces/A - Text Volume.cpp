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
int dx[]={0,0,1,-1,1,-1,-1,1};
int dy[]={1,-1,0,0,1,-1,1,-1};
string s;
int main(){
	//freopen("a.txt","r",stdin);
	int n;
	scanf("%d",&n);
	cin.ignore();
	getline(cin,s);
	vector<string>v;
	s+=" ";
	while(!s.empty()){
		v.push_back(s.substr(0,s.find(' ')));
		s.erase(0,s.find(' ')+1);
	}
	int sol=0;
	for(int i=0;i<v.size();++i){
		int cap=0;
		for(int j=0;j<v[i].size();++j){
			if(isupper(v[i][j]))
				++cap;
		}
		sol=max(sol,cap);
	}
	printf("%d\n",sol);
	return 0;
}