#include <bits/stdc++.h>
using namespace std; 
string s;
char arr[]={'a','o','i','e','u','1','3','5','7','9'};
bool ok(char c){
	for(int i=0;i<10;++i)
		if(c==arr[i])return 1;
	return 0;
}
int main(){
	cin >>s;
	int sol=0;
	for(int i=0;i<s.size();++i){
		sol+=ok(s[i]);
	}
	cout <<sol<<endl;
	return 0;
}