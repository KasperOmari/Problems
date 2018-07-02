#include <bits/stdc++.h>
using namespace std;
int t;
string s;
char ch[11];
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%s",ch);
		s=ch;
		sort(s.begin(),s.end());
		do{
			puts(s.c_str());
		}while(next_permutation(s.begin(),s.end()));
		puts("");
	}
	return 0;
}