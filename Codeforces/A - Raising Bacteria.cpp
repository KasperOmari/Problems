#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
typedef long long int ll;
#define pb push_back
#define MP make_pair
int n,sol=1;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	scanf("%d",&n);
	while(n>1){
		if(n%2)++sol;
		n/=2;
	}
	printf("%d\n",sol);
	return 0;
}