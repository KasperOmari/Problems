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
#define N 10000010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
	map<char,char>mp,mp2;
	int c=0;
	char x,y,ch;
	for(x='A',y='a',ch='A';ch<='Z';c++){
		if(c%2==0){
			mp[x++]=ch++;
		}
		else mp[y++]=ch++;
	}
	c=0;
	for(ch='a';ch<='z';c++){
		if(c%2==0){
			mp[x++]=ch++;
		}
		else mp[y++]=ch++;
	}
	for(map<char,char>::iterator it=mp.begin();it!=mp.end();it++)
		mp2[it->second]=it->first;
	int t;
	scanf("%d",&t);
	string s;
	while(t--){
		cin >>s;
		for(int i=0;i<s.size();i++)s[i]=mp[s[i]];
		sort(s.begin(),s.end());
		do{
			for(int i=0;i<s.size();i++)
				cout <<mp2[s[i]];
			puts("");
		}while(next_permutation(s.begin(),s.end()));
	}
	return 0;
}