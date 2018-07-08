#include <bits/stdc++.h>
using namespace std;
int n,q,c;
string s;
int main(){
	cin >>n>>s;
	for(int i=0;i<n-1;++i)
		if(s[i]==s[i+1]&&s[i]!='?')return puts("No"),0;
	for(int i=0;i<n;++i)if(s[i]=='?')++q;

	for(int i=1;i<n-1;++i){
		if(s[i]=='?'){
			if(s[i-1]!='?'&&s[i+1]!='?'&&s[i-1]!=s[i+1])
				++c;
		}
	}
	puts(c!=q?"Yes":"No");
	return 0;
}