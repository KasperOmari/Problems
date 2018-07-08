#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,x,sol;
bool fr[110];
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d%d",&n,&x);
	for(int a,i=0;i<n;++i){
		scanf("%d",&a);
		fr[a]=1;
	}
	for(int i=0;i<x;++i)
		sol+=!fr[i];
	sol+=fr[x];
	printf("%d\n",sol);
	return 0;
}