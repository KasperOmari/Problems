#include <bits/stdc++.h>
using namespace std;
int n;
char s[2005];
deque<char>q;
int main(){
	scanf("%d%s",&n,s);
	int i=0;
	bool f=1;
	if(n&1){
		i=1;
		q.push_front(s[0]);
	}
	for(;i<n;++i){
		if(f)
			q.push_front(s[i]);
		else
			q.push_back(s[i]);
		f=!f;
	}
	while(!q.empty()){
		printf("%c",q.front());
		q.pop_front();
	}
	puts("");
	return 0;
}