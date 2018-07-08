#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
typedef long long int ll;
#define pb push_back
#define MP make_pair
int n,l,r;
vector<pair<int,int> >p;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d%d",&l,&r);
		p.pb(MP(l,-1));
		p.pb(MP(r,0));

	}
	sort(p.begin(),p.end());
	int c=0;
	for(int i=0;i<p.size();++i){
		if(p[i].second)++c;
		else --c;
		if(c>2)break;
	}
	puts(c>2?"NO":"YES");
	return 0;
}