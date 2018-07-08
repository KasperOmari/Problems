#include <bits/stdc++.h>
using namespace std;
queue<int>q,q2;
int n,a,x,sol;
int main(){
	scanf("%d%d",&n,&a);
 	while(a--){
 		scanf("%d",&x);
 		q.push(x);
 	}
 	scanf("%d",&a);
 	while(a--){
 		scanf("%d",&x);
 		q2.push(x);
 	}
 	while(!q.empty()&&!q2.empty()){
 		int x=q.front(),y=q2.front();
 		q.pop();q2.pop();
 		if(x>y){q.push(y);q.push(x);}
 		else {q2.push(x);q2.push(y);}
 		++sol;
 		if(sol>10000){
 			puts("-1");
 			return 0;
 		}
 	}
 	printf("%d %d\n",sol,!q.empty()?1:2);
	return 0;
}