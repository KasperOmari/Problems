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
bool ok[N];
int main(){
	int n,x;
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>x;
		ok[x]=1;
	}
	int c=1;
	while(1){
		if(!ok[c]){
			cout <<c<<endl;
			return 0;
		}
		c++;
	}
	return 0;
}