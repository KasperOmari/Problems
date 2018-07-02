#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		int t;
		cin >>t;
		map<string,pair<int,int>>mp;
		map<string,pair<int,int>>::iterator it;
		while(t--){
			string s;
			int l,h;
			cin >>s>>l>>h;
			mp[s]=make_pair(l,h);
		}
		int tt;
		cin>>tt;
		while(tt--){
			int q,c=0;
			string x;
			cin >>q;
			for(it=mp.begin();it!=mp.end();it++){
				if(q>=it->second.first&&q<=it->second.second){c++;x=it->first;}
			}
			if(c==1)
				cout <<x<<endl;
			else puts("UNDETERMINED");
		}
		if(i+1!=n)
			puts("");
	}
	return 0;
}