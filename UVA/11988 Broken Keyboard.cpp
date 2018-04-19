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

int main(){
	string s,tmp;
	vector<int>v;
	int l,r;
	while(cin >>s){
		v.clear();
		s=' '+s;
		v.resize(s.size());
		v[0]=0;
		l=r=0;
		for(int i=1;i<s.size();i++){
			if(s[i]=='[')l=0;
			else if(s[i]==']')l=r;
			else {
				v[i]=v[l];
				v[l]=i;
				if(l==r)r=i;
				l=i;
			}
		}
		int i=v[0];
		while(i>0){
			cout <<s[i];
			i=v[i];
		}
		puts("");
	}
	return  0;
}