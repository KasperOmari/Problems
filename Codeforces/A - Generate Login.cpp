#include <bits/stdc++.h>
using namespace std;
string a,b;
char c='z';
int main(){
	cin >>a>>b;
	int i=1;
	cout <<a[0];
	while(i<a.size()&&a[i]<b[0])
		cout <<a[i++];
	cout <<b[0]<<endl;
	return 0;
}