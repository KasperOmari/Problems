#include <bits/stdc++.h>
using namespace std;
struct trie {
	trie *next[11];
	bool end;
	trie() {
		memset(next,0,sizeof next);
		end=false;
	}
};
trie *root;
bool insert(string &s) {
	trie *cur = root;
	int len = (int)s.size();
	for(int i = 0, idx ; i < len ; ++i){
		idx = s[i]-'0';
		if(cur->next[idx] == NULL)
			cur->next[idx] = new trie();
		cur = cur->next[idx];
		if(cur->end)
			return 1;
	}
	cur -> end = true;
	for(int i=0;i<10;++i)
		if(cur->next[i]!=NULL)
			return 1;
	return 0;
}
void freeTrie(trie *cur) {
	if(cur == NULL)
		return;
	for(int i = 0 ; i < 10 ; ++i)
		freeTrie(cur->next[i]);
	delete [] cur;
}
int n,t;
bool x;
char ch[11];
string s;
int main(){
	scanf("%d",&t);
	while(t--){
		x=0;
		root=new trie();
		scanf("%d",&n);
		while(n--){
			scanf("%s",ch);
			s=ch;
			if(x)continue;
			x=insert(s);
		}
		puts(x?"NO":"YES");
		freeTrie(root);
	}
	return 0;
}
