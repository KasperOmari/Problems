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
#include<array>
#include<list>
#include<stack>
#include<utility>
#include<iomanip>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
typedef long long ll;
map<char,int>mp;
int main()
{
	//freopen("a.txt","rt",stdin);
	int n,mx;
	cin >>n;
	cin.ignore();
	string s;
	while(n--){
		mx=0;
		getline(cin,s);
		mp.clear();
		for(int i=0;i<s.size();i++){
			if(s[i]!=' '){
				if(isupper(s[i]))
					s[i]=tolower(s[i]);
				mp[s[i]]++;
			}
		}
		for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++)
			mx=max(mx,it->second);
		for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
			if(it->second==mx)
				cout <<it->first;
		}
		puts("");
	}
	return  0;
}