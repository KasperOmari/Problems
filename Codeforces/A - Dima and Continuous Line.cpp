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
#define N 10010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
vector<int>v;
int main(){
	int n,x;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		v.push_back(x);
	}
	int sol,sol1;
	for(int i=0;i<v.size();i++){
		sol=sol1=0;
		for(int j=i+2;j<v.size();j++)
			if(v[j]>v[i]&&v[j]>v[i+1]||v[j]<v[i]&&v[j]<v[i+1])sol++;
			else sol1++;
		if(sol&&sol1)goto END;
	}
	puts("no");
	return 0;
END:
	puts("yes");
	return 0;
}