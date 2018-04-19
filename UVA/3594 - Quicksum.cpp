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
int fr[26];
int main(){
	for(char c='A';c<='Z';c++)
		fr[(int)c-'A']=c-'A'+1;
	string s;
	ll sum;
	while(getline(cin,s)&&s!="#"){
		sum=0;
		for(int i=0;i<(int)s.size();i++){
			if(s[i]!=' '){
				sum+=(i+1)*fr[s[i]-'A'];
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}