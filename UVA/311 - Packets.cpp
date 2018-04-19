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
#define N 100010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
	//freopen("a.txt","rt",stdin);
	int a,b,c,d,e,f;
	int sol;
	while(cin >>a>>b>>c>>d>>e>>f&&(a||b||c||d||e||f)){
		sol=c/4+d+e+f;
		if(c%4!=0)sol++;
		if(c%4==3){
			a-=5;
			b--;
		}
		else if(c%4==2){
			a-=6;
			b-=3;
		}
		else if(c%4==1){
			a-=7;
			b-=5;
		}
		if(b<0){
			a+=b*4;
			b=0;
		}
		sol+=b/9;
		if(b%9!=0){
			sol++;
			a-=36-(b%9*4);
		}
		if(a>0){
			sol+=a/36;
			if(a%36!=0)sol++;
		}
		printf("%d\n",sol);
	}

	return 0;
}