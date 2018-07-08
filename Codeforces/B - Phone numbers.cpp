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
	scanf("%d",&n);
	string s;
	cin >>s;
	if(n%2==0){
		for(int i=0;i<n;i++){
			if(i&&i%2==0)
				cout <<'-';
			cout <<s[i];
		}
	}
	else {
		int i;
		for(i=0;i<n-3;i++){
			if(i&&i%2==0)
				cout <<'-';
			cout <<s[i];
		}
		if(i&&s.back()!='-')
			cout <<'-';
		cout <<s.substr(s.size()-3);
	}
	puts("");
	return 0;
}