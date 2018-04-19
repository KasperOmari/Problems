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
int fra[26],frb[26];
int main(){
	string a,b;
	while(getline(cin,a)&&getline(cin,b)){
		for(int i=0;i<26;i++)fra[i]=frb[i]=0;
		for(int i=0;i<a.size();i++)fra[a[i]-'a']++;
		for(int i=0;i<b.size();i++)frb[b[i]-'a']++;
		for(int i=0;i<26;i++){
			if(fra[i]>=frb[i])
				for(int j=0;j<frb[i];j++)
					cout <<char(i+'a');
			else
				for(int j=0;j<fra[i];j++)
					cout <<char(i+'a');
		}
		puts("");
	}
	return 0;
}