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
#define N 1000010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;	
int main(){
#ifndef ONLINE_JUDGE
	freopen("a.txt","r",stdin);
#endif
	string s;
	list<char>l;
	list<char>::iterator it;
	while(cin >>s){
		l.clear();
		it=l.begin();
		for(int i=0;i<s.size();i++){
			if(s[i]=='[')it=l.begin();
			else if(s[i]==']')it=l.end();
			else {
				l.insert(it,s[i]);
			}
		}
		for(it=l.begin();it!=l.end();it++)cout <<*it;
		puts("");
	}

	return  0;
}