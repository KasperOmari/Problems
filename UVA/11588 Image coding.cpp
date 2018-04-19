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
#define N 100010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
int freq[26];
int main(){
//	freopen("a.txt","rt",stdin);
	int x,n,m,r,c,mx,sum,nonsum,sol;
	cin >>x;
	string s;
	for(int cas=1;cas<=x;cas++){
		mx=sum=nonsum=0;
		for(int i=0;i<26;i++)freq[i]=0;
		cin >>r>>c>>m>>n;
		while(r--){
			cin >>s;
			for(int i=0;i<c;i++)freq[s[i]-'A']++;
		}
		for(int i=0;i<26;i++)mx=max(mx,freq[i]);
		for(int i=0;i<26;i++){
			if(freq[i]==mx)sum+=freq[i];
			else nonsum+=freq[i];
		}
		sol=sum*m+nonsum*n;
		printf("Case %d: %d\n",cas,sol);
	}
	return 0;
}