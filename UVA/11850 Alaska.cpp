#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<utility>
#include<iomanip>
#include<bitset>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
#define N 1000010
#define MP make_pair
#define sci(n) scanf("%d",&n)
using namespace std;
typedef long long int ll;
typedef long double ld;
int main(){
	//freopen("a.txt","r",stdin);
	int t,n;
	vector<int>v;
	while(sci(t),t){
		v.clear();
		while(t--){
			sci(n);
			v.push_back(n);
		}
		sort(v.begin(),v.end());
		bool f=1;
		if(1422-v.back()>100)f=0;
		else {
			for(int i=1;i<v.size();i++){
				if(v[i]-v[i-1]>200){
					f=0;
					break;
				}
			}
		}
		puts(f?"POSSIBLE":"IMPOSSIBLE");
	}
	return 0;
}