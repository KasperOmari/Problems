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
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
int frq[26];
int main(){
	//freopen("a.txt","r",stdin);
	string s;
	int n;
	cin >>s>>n;
	if(n>s.size()){
		puts("impossible");
		return 0;
	}
	int sol=0;
	for(int i=0;i<s.size();++i){
		++frq[s[i]-'a'];
		if(frq[s[i]-'a']==1)++sol;
	}
	printf("%d\n",max(0,n-sol));
	return 0;
}