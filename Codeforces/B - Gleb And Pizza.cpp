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
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
int main(){
	//freopen("a.txt","r",stdin);
	int r,d,n,x,y,ri,sol=0;
	scanf("%d%d%d",&r,&d,&n);
	while(n--){
		scanf("%d%d%d",&x,&y,&ri);
		if(sqrt(x*x+y*y)-ri>=r-d&&sqrt(x*x+y*y)+ri<=r)++sol;
	}
	printf("%d\n",sol);
	return 0;
}