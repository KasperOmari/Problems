#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	string s;int n;cin >>s>>n;
	puts(s[0]=='f'&&n==1||s[0]=='b'&&n==2?"L":"R");
	return 0;
}