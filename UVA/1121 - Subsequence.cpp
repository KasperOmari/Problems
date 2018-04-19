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
using namespace std;
typedef long long int ll;
typedef long double ld;
int main()
{
	int n,m;
	vector<int>v;
	while(scanf("%d%d",&n,&m)!=EOF){
		v.clear();
    	int a;
    	while(n--){
    		scanf("%d",&a);
    		v.push_back(a);
    	}
    	int l=0,r=0,mn=1e9;
    	double sum=v[0];
    	while(r<v.size()){
    		if(sum>=m)
    			mn=min(mn,r-l+1);
    		if(sum>=m&&l<r)
    			sum-=v[l++];
    		else if(sum<m){
    			r++;
    			if(r<v.size())
    				sum+=v[r];
    		}
	    }
		if(mn==1e9)mn=0;
    	cout <<mn<<endl;
	}
	return  0;
}