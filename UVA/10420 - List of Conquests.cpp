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
map<string,int>mp;
int main()
{
	int n;
	cin >>n;
	char s[80],a[80];
	while(n--){
		scanf("%s",s);
		gets(a);
		mp[s]++;
	}
	for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
		printf("%s %d\n",(it->first).c_str(),it->second);
	return  0;
}