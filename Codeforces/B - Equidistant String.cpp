#include <bits/stdc++.h>
using namespace std;
string s,t,p;
int x;
bool f;
int main(){
	cin >>s>>t;
	for(int i=0;i<(int)s.size();++i){
		f=0;
		if(s[i]!=t[i]){
			if(x&1)
				p+=t[i];
			else p+=s[i];
			++x;
			f=1;
		}
		if(!f)p+=s[i];
	}
	puts(x&1?"impossible":p.c_str());
	return 0;
}