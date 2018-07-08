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
#define N 2000010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int sol=0;
	while(a>0&&b>0&&!(b==1&&a==1)){
		sol++;
		if(a<b){
			a++;
			b-=2;
		}
		else{
			b++;
			a-=2;
		}
	}
	printf("%d\n",sol);

	return 0;
}