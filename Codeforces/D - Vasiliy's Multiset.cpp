#include <bits/stdc++.h>
using namespace std;
string s;
char ch;
int n,a;
struct node{
	node *nxt[2];
	int pre;
	node(){
		for(int i=0;i<2;++i)
			nxt[i]=NULL;
		pre=0;
	}
};
node *root;
void insert(){
	node *cur=root;
	bitset<32>b(a);
	for(int i=31;i>=0;--i){
		if(cur->nxt[b[i]]==NULL)
			cur->nxt[b[i]]=new node;
		cur=cur->nxt[b[i]];
		++cur->pre;
	}
}
void del(){
	node *cur=root;
	bitset<32>b(a);
	for(int i=31;i>=0;--i){
		cur=cur->nxt[b[i]];
		--cur->pre;
	}
}
int find(){
	node *cur=root;
	bitset<32>b(a);
	int sol=0;
	for(int i=31;i>=0;--i){
		if(cur==NULL)break;
		if(!b[i]){
			if(cur->nxt[1]!=NULL&&cur->nxt[1]->pre>0){
				cur=cur->nxt[1];
				sol+=(int)pow(2.0,i);
			}
			else cur=cur->nxt[0];
		}else{
			if(cur->nxt[0]!=NULL&&cur->nxt[0]->pre>0){
				cur=cur->nxt[0];
				sol+=(int)pow(2.0,i);
			}
			else cur=cur->nxt[1];
		}
	}
	return max(a,sol);
}
void freeTrie(node *cur){
	if(cur==NULL)return;
	for(int i=0;i<2;++i)
		freeTrie(cur->nxt[i]);
	delete cur;
}
int main(){
	root=new node;
	scanf("%d",&n);
	while(n--){
		scanf(" %c%d",&ch,&a);
		if(ch=='+')insert();
		else if(ch=='-')del();
		else printf("%d\n",find());
	}
	freeTrie(root);
	return 0;
}