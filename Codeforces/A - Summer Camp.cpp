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
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
	string s,tmp;
	int t;
	for(int i=1;i<=1000;i++){
		tmp="";
		t=i;
		while(t){
			tmp+=char((t%10)+'0');
			t/=10;
		}
		reverse(tmp.begin(),tmp.end());
		s+=tmp;
	}
	int n;
	scanf("%d",&n);
	printf("%c\n",s[n-1]);
	return 0;
}