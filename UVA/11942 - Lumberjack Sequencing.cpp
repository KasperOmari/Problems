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
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		vector<int>v,v2;
		for(int j=0;j<10;j++){
			int x;
			cin>>x;
			v.push_back(x);
			v2.push_back(x);
		}
		if(i==0)
			cout <<"Lumberjacks:\n";
		sort(v2.begin(),v2.end());
		if(v==v2)cout <<"Ordered\n";
		else {
			sort(v2.rbegin(),v2.rend());
			if(v==v2)cout <<"Ordered\n";
			else
				cout <<"Unordered\n";
		}
	}
	return 0;
}