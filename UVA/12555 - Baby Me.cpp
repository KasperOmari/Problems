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
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
int main(){
//	freopen("a.txt","r",stdin);
	int t;
	cin >>t;
	int kas=1;
	while(t--){
		string s;
		double x,y=0;
		cin >>x>>s;
		if(s.size()>3)
			y=(int)(s[3]-'0');
		cout <<"Case "<<kas++<<": "<<x*0.5+y*0.05<<endl;
	}
	return 0;
}