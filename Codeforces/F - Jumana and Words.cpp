#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll v[27],m,sum;
int n,len;
string s;
int main(){
	for(int i=0;i<26;++i)scanf("%I64d",v+i);
	scanf("%d",&n);
	while(n--){
		sum=0;
		cin >>s>>m;
		for(int i=0;i<s.size();++i)
			sum+=v[s[i]-'A'];
		for(int i=0;i<26;++i){
			if(v[i]==m-sum){
				printf("%c\n",(char)(i+'A'));
				break;
			}
		}
	}
	return 0;
}
