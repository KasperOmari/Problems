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
	string s,sol="";
	cin >>s;
	while(!s.empty()){
		if(s.substr(0,3)=="WUB"){s.erase(0,3);sol+=" ";}
		else {sol+=s[0];s.erase(0,1);}
	}
	while(sol[0]==' ')sol.erase(0,1);
	for(int i=0;i<sol.size();i++){
		if(sol[i]==' '&&sol[i+1]==' '){
			sol.erase(i,1);
			i--;
		}
	}
	cout <<sol<<endl;
	return 0;
}