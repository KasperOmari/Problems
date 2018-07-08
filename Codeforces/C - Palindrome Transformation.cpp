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
vector<int>indx;
int main(){
	int len,n,sol=0,t;
	scanf("%d%d",&len,&n);
	string s;
	cin >>s;
	for(int i=0;i<len/2;i++){
		t=min(abs(s[i]-s[len-i-1]),26-abs(s[i]-s[len-i-1]));
		sol+=t;
		if(t)
			if(n-1<len/2)indx.push_back(i);
			else indx.push_back(len-i-1);
	}
	if(n>=len/2)
		reverse(indx.begin(),indx.end());
	n--;
	if(sol){
		sol+=indx.back()-indx[0];
		sol+=min(abs(indx.back()-n),abs(indx[0]-n));
		printf("%d\n",sol);
	}
	else puts("0");
	return 0;
}