#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<utility>
#include<iomanip>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int const N=1e6+2;
int cum[N];
int main()
{
	//freopen("a.txt","r",stdin);
	vector<int>vl,vr;
	string s;
	int q,cas=1;;
	while(cin >>s&&s.size()){ 
		cin >>q;
		vl.clear();
		vr.clear();
     	int c=1;
    	cum[0]=0;
    	for(int i=0;i<s.size();i++){
    		cum[c]=cum[c-1]+(s[i]-'0');
			c++;
		}
    	int l,r;
    	for(int i=0;i<q;i++){
    		cin >>l>>r;
			l++;r++;
			vl.push_back(min(l,r));
			vr.push_back(max(l,r));
		}
		cout <<"Case "<<cas++<<":\n";
		for(int i=0;i<q;i++){
			if(cum[vr[i]]-cum[vl[i]-1]==vr[i]-vl[i]+1||cum[vr[i]]-cum[vl[i]-1]==0)
				puts("Yes");
			else puts("No");
		}
	}
	return  0;
}