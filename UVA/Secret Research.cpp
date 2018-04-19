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
#include<queue>
#include<stack>
#include<utility>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		string s;
		cin >>s;
		if(s=="1"||s=="4"||s=="78")puts("+");
		else if(s.size()>=2&&s[s.size()-2]=='3'&&s[s.size()-1]=='5')puts("-");
		else if(s.size()>=2&&s[0]=='9'&&s[s.size()-1]=='4')puts("*");
		else if(s.size()>=3&&s[0]=='1'&&s[1]=='9'&&s[2]=='0')puts("?");
	}
	return 0;
}