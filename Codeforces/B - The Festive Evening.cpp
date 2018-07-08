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
int dx[]={0,0,1,-1,1,-1,-1,1};
int dy[]={1,-1,0,0,1,-1,1,-1};
int frq[26];
bool fr[26];
int main(){
	//freopen("a.txt","r",stdin);
	int n,k;
	cin >>n>>k;
	string s;
	cin >>s;
	for(int i=0;i<n;i++)
		++frq[s[i]-'A'];
	int g=0;
	for(int i=0;i<n;++i){
		if(!fr[s[i]-'A']){
			++g;
			fr[s[i]-'A']=1;
		}
		if(g>k){
			puts("YES");
			return 0;
		}
		if(--frq[s[i]-'A']==0){
			--g;
			fr[s[i]-'A']=0;
		}
	}
	puts("NO");
	return 0;
}