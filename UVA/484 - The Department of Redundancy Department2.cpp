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
int ch(vector<pair<int,int>>v,int x){
	for(int i=0;i<v.size();i++)
		if(v[i].first==x)return i;
	return -1;
}
int main()
{
	//freopen("a.txt","rt",stdin);
	int a;
	vector<pair<int,int>>v;
	while(cin >>a){
		if(ch(v,a)==-1)v.push_back(make_pair(a,1));
		else v[ch(v,a)].second++;
	}
	for(int i=0;i<v.size();i++)
		cout <<v[i].first<<" "<<v[i].second<<endl;
	

	return 0;
}