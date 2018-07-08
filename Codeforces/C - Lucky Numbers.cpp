#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<stack>
#include<utility>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,c=0;
	cin >>n;
	for(double i=1;i<=n;i++){
		c+=pow(2.0,i);
	}
	cout <<c<<endl;
	return 0;
}