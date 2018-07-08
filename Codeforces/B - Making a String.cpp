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
#define N 20000010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
	int n,x;
	scanf("%d",&n);
	vector<int>v;
	while(n--){
		scanf("%d",&x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int j=0;j<v.size();j++){
		for(int i=1;i<v.size();i++){
			if(v[i]==v[i-1]){
				v[i-1]--;
				if(v[i-1]<0)v[i-1]=0;
			}
		}
	}
	ll sol=0;
	for(int i=0;i<v.size();i++)sol+=v[i];
	printf("%I64d\n",sol);

	return 0;
}