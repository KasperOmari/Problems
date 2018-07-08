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
int main(){
	double l3,l4,l5;
	scanf("%lf%lf%lf",&l3,&l4,&l5);
	l3=sqrt(2)*(l3*l3*l3)/12;
	l4=sqrt(2)*(l4*l4*l4)/6;
	l5=(5+sqrt(5))*(l5*l5*l5)/24;
	printf("%.12lf\n",(l3+l4+l5));
	return 0;
}