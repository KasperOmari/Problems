#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<utility>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
int main()
{
	map<string,char>mp;
	mp[".-"]='A';mp["-..."]='B';mp["-.-."]='C';mp["-.."]='D';mp["."]='E';mp["..-."]='F';mp["--."]='G';mp["...."]='H';mp[".."]='I';mp[".---"]='J';
	mp["-.-"]='K';mp[".-.."]='L';mp["--"]='M';mp["-."]='N';mp["---"]='O';mp[".--."]='P';mp["--.-"]='Q';mp[".-."]='R';mp["..."]='S';mp[".----"]='1';
	mp[".-.-.-"]='.';mp["---..."]=':';mp["-"]='T';mp["..---"]='2';mp["--..--"]=',';mp["-.-.-."]=';';mp["..-"]='U';mp["...--"]='3';mp["..--.."]='?';
	mp["-...-"]='=';mp["...-"]='V';mp["....-"]='4';mp[".----."]='’';mp[".-.-."]='+';mp[".--"]='W';mp["....."]='5';mp["-.-.--"]='!';mp["-....-"]='-';
	mp["-..-"]='X';mp["-...."]='6';mp["-..-."]='/';mp["..--.-"]='_';mp["-.--"]='Y';mp["--..."]='7';mp["-.–."]='(';mp[".-..-."]='"';mp["--.."]='Z';
	mp["---.."]='8';mp["-.--.-"]=')';mp[".--.-."]='@';mp["-----"]='0';mp["----."]='9';mp[".-..."]='&';
	int n;
	cin >>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		s+=' ';
		cout <<"Message #"<<i+1<<endl;
		for(int j=0;j<s.size();j++){
			if(s[j]==' '){
				cout <<mp[s.substr(0,j)];
				if(s[j+1]==' '&&s[j+1]!=string::npos){
					cout <<" ";
					s.erase(j+1,1);
				}
				s.erase(0,j+1);
				j=0;
			}
		}
		cout <<endl;
	}
	return 0;
}