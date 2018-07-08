#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
int n,a;
int b[100005];
ll sum;
int main(){
//	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a);
		sum+=a;
	}
	for(int i=0;i<n;++i)
		scanf("%d",&b[i]);
	sort(b,b+n);
	reverse(b,b+n);
	puts(b[0]+b[1]>=sum?"YES":"NO");
	return 0;
}