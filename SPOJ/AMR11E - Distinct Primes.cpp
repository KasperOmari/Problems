#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
bool pr[100000];
int prime[100000];
void sieve(){
	pr[0]=pr[1]=1;
	for(int i=2;i*i<100000;++i)
		if(!pr[i])
			for(int j=i*i;j<100000;++j)
				pr[j]=1;
	int c=0;
	for(int i=2;i<100000;++i)
		if(!pr[i])
			prime[c++]=i;
}
vector<int>pf;
void primeFac(int n){
	for(int i=2;i*i<n;++i){
		if(n%i==0){
			pf.push_back(i);
			while(n%i==0)n/=i;
		}
	}
	if(n>1)pf.push_back(n);
}
bool chek(int n){
	primeFac(n);
	int c=0;
	for(int i=0;i<pf.size();++i){
		if(!pr[pf[i]])
			++c;
	}
	pf.clear();
	return c>=3;
}
vector<int>lucy;
int main(){
	int n,t,x=30;
	while(lucy.size()<=1001){
		if(chek(x))
			lucy.push_back(x);
		++x;
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",lucy[n-1]);
	}
 
	return 0;
} 
