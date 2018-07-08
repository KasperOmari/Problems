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
#define N 10010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
string ar[]={"January", "February", "March", "April","May", "June", "July", "August", "September", "October", "November", "December"};
int main(){
	map<int,string>mp;
	map<string,int>mp2;
	for(int i=0;i<12;i++){
		mp[i]=ar[i];
		mp2[ar[i]]=i;
	}
	string s;
	int n;
	cin >>s>>n;
	cout <<mp[(mp2[s]+n)%12]<<endl;
	return 0;
}