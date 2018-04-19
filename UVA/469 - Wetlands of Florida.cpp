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
using namespace std;
typedef long long int ll;
typedef long double ld;
int dx[]={0,0,1,-1,1,-1,-1,1};
int dy[]={1,-1,0,0,1,-1,1,-1};
int n,m,sol;
vector<string>v;
void DFS(int i,int j){
	v[i][j]='.';
	++sol;
	for(int k=0;k<8;++k){
		int a=i+dx[k];
		int b=j+dy[k];
		if(a>=0&&a<n&&b>=0&&b<m&&v[a][b]=='W')
			DFS(a,b);
	}
}
int main(){
	//freopen("a.txt","r",stdin);
	int t;
	scanf("%d",&t);
	cin.ignore();
	bool f=0;
	string s;
	getline(cin,s);
	while(t--){
		if(f)puts("");
		f=1;
		n=m=0;
		v.clear();
		while(getline(cin,s)&&!s.empty()){
			if(isalpha(s[0])){
				++n;
				m=(int)s.size();
				v.push_back(s);
			}
			else{
				sol=0;
				int x,y;
				sscanf(s.c_str(),"%d%d",&x,&y);
				DFS(x-1,y-1);
				printf("%d\n",sol);
				for(int i=0;i<n;++i)
					for(int j=0;j<m;++j)
						if(v[i][j]=='.')
							v[i][j]='W';
			}
		}
	}
	return 0;
}