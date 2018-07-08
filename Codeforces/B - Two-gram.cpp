#include <bits/stdc++.h>
using namespace std;
int n,fr[26][26],mx,x,y;
char s[101];
int main(){
	scanf("%d",&n);
	scanf("%s",s);
	for(int i=0;i<n-1;++i)
		++fr[s[i]-'A'][s[i+1]-'A'];
	for(int i=0;i<26;++i)
		for(int j=0;j<26;++j)
			if(mx<fr[i][j])
				x=i,y=j,mx=fr[i][j];
	printf("%c%c\n",(char)(x+'A'),(char)(y+'A'));
	return 0;
}