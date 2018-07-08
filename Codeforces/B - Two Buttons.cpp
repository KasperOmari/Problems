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
int const N = 1e5 + 1;
int n, m;
bool vis[N];
queue<int> q;

int BFS(){
	memset(vis,0,sizeof vis);
	q.push(n);
	int sol=0;
	while(!q.empty()){
		int size=q.size();
		while(size--){
			int fr=q.front();
			vis[fr]=1;
			q.pop();
			if(fr==m)return sol;
			if(fr-1>0&&!vis[fr-1])q.push(fr-1);
			if(fr*2<=m*2&&!vis[fr*2])q.push(fr*2);
		}
		++sol;
	}
}
int main(){
	//freopen("a.txt","r",stdin);
	scanf("%d%d",&n,&m);
	printf("%d\n",BFS());
	return 0;
}