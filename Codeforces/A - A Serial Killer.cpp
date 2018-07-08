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
vector<pair<string,string> >v;
int main(){
	string s,s1;
	cin >>s>>s1;
	int n;
	v.push_back(MP(s,s1));
	cin >>n;
	for(int i=1;i<=n;i++){
		cin >>s>>s1;
		if(s==v[i-1].first)v.push_back(MP(s1,v[i-1].second));
		else if(s==v[i-1].second)v.push_back(MP(v[i-1].first,s1));
	}
	for(int i=0;i<=n;i++)
		cout <<v[i].first<<" "<<v[i].second<<endl;
	return 0;
}