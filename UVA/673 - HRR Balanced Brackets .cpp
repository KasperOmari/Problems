#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<iomanip>
#include<utility>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
//freopen("a.txt","rt",stdin);
int main()
{
	int n;
	cin >>n;
	stack<char>sk;
	while(n--){
		while(!sk.empty())sk.pop();
		string s;
		cin >>s;
		for(int i=0;i<s.size();i++){
			if(!sk.empty()&&s[i]==']'&&sk.top()=='[')sk.pop();
			else if(!sk.empty()&&s[i]=='}'&&sk.top()=='{')sk.pop();
			else if(!sk.empty()&&s[i]==')'&&sk.top()=='(')sk.pop();
			else sk.push(s[i]);
		}
		if(sk.empty())puts("YES");
		else puts("NO");
	}
	
	return 0;
}