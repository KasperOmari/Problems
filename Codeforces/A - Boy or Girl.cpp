#include <bits/stdc++.h>
using namespace std;
char s[101];
int len,sol;
set<char>st;
int main(){
	scanf("%s",s);
	len=strlen(s);
	for(int i=0;i<len;++i)
		st.insert(s[i]);
	sol=st.size();
	puts(sol%2==0?"CHAT WITH HER!":"IGNORE HIM!");
	return 0;
}
