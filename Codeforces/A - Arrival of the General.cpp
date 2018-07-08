#include<cstdio>
using namespace std;
int main(){
	int n,x,mx=-1e9,mn=1e9,mxi=0,mni=0;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		if(mx<x){
			mx=x;
			mxi=i;
		}
		if(mn>=x){
			mn=x;
			mni=i;
		}
	}
	printf("%d\n",mxi+n-mni-(mni<mxi?2:1));
	return 0;
}