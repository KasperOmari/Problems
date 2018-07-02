#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<stack>
#include<queue>
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
	//freopen("a.txt","rt",stdin);
	queue<int>q;
	int n;
	while(cin >>n&&n!=0){
		while(!q.empty())q.pop();
		for(int i=1;i<=n;i++)q.push(i);
		if(q.size()==1){cout <<"Discarded cards:\n";
		cout <<"Remaining card: "<<q.front()<<endl;
		continue;
		}
		else cout <<"Discarded cards: ";
		int x=0;
		while(q.size()>1){
			if((x%2)==0){
				if(q.size()>2)cout <<q.front()<<", ";
				else cout <<q.front();
				q.pop();
				q.push(q.front());
			}
			else q.pop();
			x++;
		}
		puts("");
		cout <<"Remaining card: "<<q.front()<<endl;
	}
	return 0;
}