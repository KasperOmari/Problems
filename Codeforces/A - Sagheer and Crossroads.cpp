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
int a[4][4];
int main(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	}
	puts(a[0][3]&&(a[0][0]||a[0][1]||a[0][2]||a[1][0]||a[2][1]||a[3][2])||a[1][3]&&(a[1][0]||a[1][1]||a[1][2]||a[0][2]||a[2][0]||a[3][1])||a[2][3]&&(a[2][0]||a[2][1]||a[2][2]||a[0][1]||a[1][2]||a[3][0])||a[3][3]&&(a[3][0]||a[3][1]||a[3][2]||a[0][0]||a[1][1]||a[2][2])?"YES":"NO");
	return 0;
}