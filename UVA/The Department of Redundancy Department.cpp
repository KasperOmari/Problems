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
	map<int,int>mp;
	int n;
	vector<int>v;
	while(cin>>n){
		if(mp[n]==0)v.push_back(n);
		mp[n]++;
	}
	for(int i=0;i<v.size();i++){
		cout <<v[i]<<" "<<mp[v[i]]<<endl;
	}
	return 0;
}