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
#define N 1000010
#define MP make_pair
#define sci(n) scanf("%d",&n)
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
	int t,sol=0;
	sci(t);
	double l,w,d,k;
	while(t--){
		cin >>l>>w>>d>>k;
		if(((l<=56.00&&w<=45.00&&d<=25.00)||l+w+d<=125.00)&&k<=7.00){
			puts("1");sol++;
		}
		else puts("0");
	}
	printf("%d\n",sol);
	return 0;
}