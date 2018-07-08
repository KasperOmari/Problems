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
bool a[4];
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n,x,y;
	scanf("%d",&n);
	a[n]=1;
	for(int i=1;i<=3;i++){
		scanf("%d%d",&x,&y);
		swap(a[x],a[y]);
	}
	for(int i=1;i<4;i++)
		if(a[i]){
			printf("%d\n",i);
			break;
		}
	return 0;
}