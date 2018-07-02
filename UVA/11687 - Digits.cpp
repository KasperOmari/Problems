#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	while(cin >>s&&s!="END"){
		int c=1;
		while(s!=static_cast<ostringstream*>(&(ostringstream()<<(int)s.size()))->str()){
			c++;
			s=static_cast<ostringstream*>(&(ostringstream()<<(int)s.size()))->str();
		}
		cout <<c<<endl;
	}
	return 0;
}