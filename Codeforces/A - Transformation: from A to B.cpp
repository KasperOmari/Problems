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
int a,b;
vector<int>v;
int main(){
	scanf("%d%d",&a,&b);
	v.push_back(b);
	while(b!=a){
		if(b>a&&b%2==0)b/=2;
		else if(b>a&&b%10==1)b=(b-1)/10;
		else {
			puts("NO");
			return 0;
		}
		v.push_back(b);
	}
	puts("YES");
	printf("%d\n",(int)v.size());
	for(int i=v.size()-1;i>=0;i--)printf("%d ",v[i]);
	puts("");
	return 0;
}