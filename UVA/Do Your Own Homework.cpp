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
//	freopen("a.txt","rt",stdin);	
	int n,cases=1;
	cin >>n;
	while(n--){
		int t;
		map<string,int>mp;
		cin >>t;
		string s;
		int x;
		while(t--){
			cin >>s>>x;
			mp[s]=x;
		}
		int D;
		cin >>D>>s;
		cout <<"Case "<<cases++<<": ";
		if(mp[s]<=D&&mp[s]>0)cout <<"Yesss\n";
		else if(mp[s]>D&&mp[s]<=D+5)cout <<"Late\n";
		else if(mp[s]>D+5||mp[s]==0)cout <<"Do your own homework!\n";
	}
	
	return 0;
}