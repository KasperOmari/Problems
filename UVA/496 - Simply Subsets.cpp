#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<utility>
#include<iomanip>
#include<bitset>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
typedef long long int ll;
typedef long double ld;
int a[1000],b[1000];
int main(){
//	freopen("a.txt","r",stdin);
	string s,s1;
	stringstream ss;
	while(getline(cin,s)){
		int x,c=0,y;
		ss.clear();
		ss<<s;
		while(ss>>x)a[c++]=x;
		getline(cin,s1);
		ss.clear();
		ss<<s1;
		int c1=0;
		while(ss>>x)b[c1++]=x;
		x=y=0;
		for(int i=0;i<c;i++){
			for(int j=0;j<c1;j++){
				if(a[i]==b[j]){
					x++;
					break;
				}
			}
		}
		for(int i=0;i<c1;i++){
			for(int j=0;j<c;j++){
				if(a[j]==b[i]){
					y++;
					break;
				}
			}
		}
		if(x==c&&c<c1)puts("A is a proper subset of B");
		else if(y==c1&&c1<c)puts("B is a proper subset of A");
		else if(x==c&&y==c1&&c==c1)puts("A equals B");
		else if(x==0&&y==0)puts("A and B are disjoint");
		else puts("I'm confused!");
	}
	return 0;
}