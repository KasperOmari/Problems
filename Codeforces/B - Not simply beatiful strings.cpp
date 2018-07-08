#include <bits/stdc++.h>
using namespace std;
string s;
int fr[26],a,b;
int main(){
	cin >>s;
	for(int i=0;i<s.size();++i)
		++fr[s[i]-'a'];
	for(int i=0;i<26;++i){
		if(fr[i]>0)++a;
		if(fr[i]>1)++b;
	}
	puts(a<=4&&a+b>=4?"Yes":"No");
	return 0;
	
}