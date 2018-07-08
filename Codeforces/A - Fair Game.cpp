#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,a,sol;
string s,t;
int fr[105];
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	cin >>n;
	while(n--){
		cin >>a;
		if(!fr[a])++sol;
		fr[a]++;

	}
	if(sol==2){
		int x=0,y=0,idx=0,idx1=0;
		for(int i=0;i<105;++i){
			if(fr[i]&&!x){
				x=fr[i];
				idx=i;
			}else if(fr[i]&&x){
				y=fr[i];
				idx1=i;
				if(x==y){
					puts("YES");
					cout <<idx<<" "<<idx1<<endl;
					return 0;
				}else {
					puts("NO");
					return 0;
				}
			}
		}
	}else puts("NO");

	return 0;
}