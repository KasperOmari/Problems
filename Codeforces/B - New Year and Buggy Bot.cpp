#include <bits/stdc++.h>
using namespace std;
pair<int,int>ds[5];
int n,m,x,y,sol;
string s;
int idx[]={0,1,2,3};
char g[55][55];
int DFS(int i,int j,int K){
	if(g[i][j]=='E')
		return 1;
	if(K==s.size()||g[i][j]=='#')return 0;
	int nx=i+ds[idx[s[K]-'0']].first;		
	int ny=j+ds[idx[s[K]-'0']].second;
	if(nx<n&&nx>=0&&ny>=0&&ny<m)
		return DFS(nx,ny,K+1);
	else return 0;
	
}
int main(){
	ds[0].first=-1;
	ds[0].second=0;
	ds[1].first=0;
	ds[1].second=-1;
	ds[2].first=0;
	ds[2].second=1;
	ds[3].first=1;
	ds[3].second=0;
	cin >>n>>m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >>g[i][j];
			if(g[i][j]=='S')x=i,y=j;
		}
	}
	cin >>s;
	do{
		sol+=DFS(x,y,0);
	}while(next_permutation(idx,idx+4));
	cout <<sol<<endl;
	return 0;
}