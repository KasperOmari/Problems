#include<string>
#include<cstdio>
using namespace std;
int main(){
	int n;
	string ch="aabb";
	string s="";
	scanf("%d",&n);
	for(int i=0;i<n;++i)
		s+=ch[i%4];
	printf("%s\n",s.c_str());
	return 0;
}