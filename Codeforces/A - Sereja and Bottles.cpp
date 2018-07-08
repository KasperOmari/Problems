#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,sol;
pair<int,int> p[101];
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d",&n);
	for(int i=0;i<n;++i)
		scanf("%d%d",&p[i].first,&p[i].second);
	for(int i=0;i<n;++i){
		bool f=1;
		for(int j=0;j<n;++j){
			if(i!=j&&p[i].first==p[j].second){
				f=0;
				break;
			}
		}
		sol+=f;
	}
	printf("%d\n",sol);
	return 0;
}