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
	string s;
	cin >>s;
	int sol=0;
	bool f=0;
	for(int i=s.size();i>=0;i--){
		for(int j=0;j<s.size();j++){
			if(s.find(s.substr(j,i),j+1)!=s.npos){
				f=1;
				sol=i;
				break;
			}
		}
		if(f)break;
	}
	cout <<sol<<endl;
	return 0;
}