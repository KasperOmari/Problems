#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<iomanip>
#include<utility>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
	map<char,float>mp;
	mp['C']=12.01;mp['H']=1.008;mp['N']=14.01;mp['O']=16.00;
	int n;
	cin >>n;
	string s;
	cin.ignore();
	while(n--){
		getline(cin,s);
		float sum=0;
		for(int i=0;i<s.size();){
			char ch=s[i];
			int nm=0;
			i++;
			while(isdigit(s[i])){
				nm=(10*nm)+(s[i]-'0');i++;
			}
			if(nm>0)
			sum+=mp[ch]*nm;
			else sum+=mp[ch];
		}
		cout <<fixed<<showpoint<<setprecision(3)<<sum<<endl;
	}
	return 0;
}