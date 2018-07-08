#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
typedef long long int ll;
#define pb push_back
#define MP make_pair
int a[8],fr[15];
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	for(int i=0;i<6;++i){
		scanf("%d",a+i);
		fr[a[i]]++;
	}
	bool el=0,be=0;
	for(int i=0;i<6;++i){
		if(fr[a[i]]==4){
			for(int j=0;j<6;++j){
				if(fr[a[j]]==2){el=1;break;}
				else if(fr[a[j]]==1){be=1;break;}
			}
			if(el||be)break;
		}
		if(fr[a[i]]==5){be=1;break;}
		if(fr[a[i]]==6){el=1;break;}
	}
	if(!be&&!el)puts("Alien");
	else if(be)puts("Bear");
	else puts("Elephant");
	return 0;
}