#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,len,sol,a;
map<int,int>mp;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d",&n);
	for (int i=1;i<=n;++i){
        scanf("%d",&a);
        len=i;
        if (mp[a-1]&&mp[a+1])len=i-min(mp[a-1],mp[a+1]);
        if (mp[a-2])len=min(i-mp[a-2],len);
        if (mp[a+2])len=min(i-mp[a+2],len);
        if (len>sol)sol=len;
        mp[a]=i;
    }
    printf("%d\n",sol);
	return 0;
}