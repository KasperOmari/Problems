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
	int m,n;
	cin >>m>>n;
	map<string,int>mp;
	string s;
	while(m--){
		int x;
		cin >>s>>x;
		mp[s]=x;
	}
	long long sum=0;
	cin.ignore();
	string x;
	while(n--){
		x.clear();
		sum=0;
		while(cin>>s&&s!=".")
			sum+=mp[s];
		cout <<sum<<endl;
	}
	return 0;
}