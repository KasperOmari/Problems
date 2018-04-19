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
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
	int n;
	string s;
	while(cin >>s&&s!="0"){
		n=0;
		for(int i=0;i<s.size();i+=2)n+=s[i]-'0';
		for(int i=1;i<s.size();i+=2)n-=s[i]-'0';
		if(n%11==0){cout <<s;printf(" is a multiple of 11.\n");}
		else {cout <<s;printf(" is not a multiple of 11.\n");}
	}
	return 0;
}