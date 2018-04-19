#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<iomanip>
#include<utility>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
	//freopen("a.txt","rt",stdin);	
	string x,s,ss;
	map<string,string>mp;
	vector<string>v;
	while(getline(cin,x)&&x!=""){
		s=x.substr(0,x.find(" "));ss=x.substr(x.find(" ")+1);
		mp[ss]=s;
		v.push_back(s);
	}
	while(cin >>s){
		if(mp.find(s)!=mp.end()){
			if(mp[s].size()<=s.size())
				cout <<mp[s]<<endl;
			else cout <<s<<endl;
		}
		else puts("eh");
	}
	return 0;
}