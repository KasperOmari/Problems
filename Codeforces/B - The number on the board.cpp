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
int k;
ll c,sol=1e18;
string s;
int main(){
	//freopen("a.txt","r",stdin);	
	cin >>k>>s;
	ll sum=0;
	for(int i=0;i<s.size();++i)
		sum+=(int)(s[i]-'0');
	if(sum>=k)puts("0");
	else {
		sort(s.begin(),s.end());
		for(int i=0;i<s.size();++i){
			sum-=s[i]-'0';
			sum+=9;
			if(sum>=k){
				cout <<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}