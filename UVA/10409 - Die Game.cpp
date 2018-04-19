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
//	freopen("a.txt","r",stdin);
	int n,x;
	string s;
	while(scanf("%d",&n),n){
		int sol[]={1,2,3,4,5,6};
		while(n--){
			cin >>s;
			if(s[0]=='n'){
				x=sol[1];
				sol[1]=sol[0];
				sol[0]=sol[4];
				sol[4]=sol[5];
				sol[5]=x;
			}
			else if(s[0]=='s'){
				x=sol[1];
				sol[1]=sol[5];
				sol[5]=sol[4];
				sol[4]=sol[0];
				sol[0]=x;
			}
			else if(s[0]=='e'){
				x=sol[3];
				sol[3]=sol[0];
				sol[0]=sol[2];
				sol[2]=sol[5];
				sol[5]=x;
			}
			else if(s[0]=='w'){
				x=sol[3];
				sol[3]=sol[5];
				sol[5]=sol[2];
				sol[2]=sol[0];
				sol[0]=x;
			}
		}
		printf("%d\n",sol[0]);
	}
	return 0;
}