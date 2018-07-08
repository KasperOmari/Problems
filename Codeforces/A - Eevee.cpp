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
string ar[]={"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};
int main(){
	int n;
	scanf("%d",&n);
	string s,sol;
	cin >>s;
	if(n==8){puts("vaporeon");return 0;}
	else if(n==6){puts("espeon");return 0;}
	for(int i=0;i<6;i++){
		bool f=1;
		for(int j=0;j<7;j++){
			if(s[j]!='.'&&s[j]!=ar[i][j]){
				f=0;
				break;
			}
		}
		if(f){
			cout <<ar[i]<<endl;
			return 0;
		}
	}
	cout <<sol<<endl;
	return 0;
}