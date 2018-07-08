#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[]={1,0,-1,0,1,-1,1,-1};
int dy[]={0,1,0,-1,1,-1,-1,1};
string s,mn;
int n,m;
int main(){
	scanf("%d%d",&n,&m);
	if(n==1&&m==0){puts("0 0");return 0;}
	if(m==0||n*9<m){
		puts("-1 -1");
		return 0;
	}
	int x=m/9;
	s.resize(x,'9');
	x=m%9;
	if(x)
  	s+=char(x+'0');
	mn=s;
	reverse(mn.begin(),mn.end());
	for(int i=s.size();i<n;++i)
		s+='0';
	if(mn.size()!=n)
	{
	  mn[0]--;
	  mn='1'+mn;
  	for(int i=mn.size();i<n;++i)
      mn.insert(1,1,'0');
   
	}
	cout <<mn<<" "<<s<<endl;
	return 0;
}