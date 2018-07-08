#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,m;
pair<int,int>a[25];
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;++i)
		scanf("%d%d",&a[i].second,&a[i].first);
	sort(a,a+m);
	int sol=0;
	for(int i=m-1;i>=0;--i){
		sol+=min(n,a[i].second)*a[i].first;
		n-=min(n,a[i].second);
	}
	printf("%d\n",sol);
	return 0;
}