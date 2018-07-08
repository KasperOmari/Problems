#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,-1,1,1,-1};
typedef long long ll;
#define pb push_back
#define pf push_front
#define MP make_pair
int n,lo,sol;
bool fr[26];
string s;
vector<string>v;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
#endif
	cin >>n>>s;
	string t="";
	for(int i=0;i<s.size();++i){
		if(islower(s[i])){
			t+=s[i];
		}else {
			sort(t.begin(),t.end());
			t.resize(unique(t.begin(),t.end())-t.begin());
			int len=t.size();
			sol=max(sol,len);
			t="";
		}
	}
	sort(t.begin(),t.end());
	t.resize(unique(t.begin(),t.end())-t.begin());
	int len=t.size();
	sol=max(sol,len);
	cout <<sol<<endl;
	return 0;
}