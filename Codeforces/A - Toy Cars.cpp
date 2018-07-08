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
#define N 2000010
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef long double ld;
int a[110][110],ok[101];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	vector<int>v;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				if(a[i][j]==1)
					ok[i]=1;
				else if(a[i][j]==2)
					ok[j]=1;
				else ok[i]=ok[j]=1;
			}
		}
	}
	for(int i=0;i<n;i++)
		if(!ok[i])
			v.push_back(i+1);
	printf("%d\n",v.size());
	for(int i=0;i<v.size();i++)
		printf("%d ",v[i]);
	return 0;
}