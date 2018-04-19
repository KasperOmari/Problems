#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cmath>
#include<memory.h>
#include<cctype>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<list>
#include<stack>
#include<utility>
#include<iomanip>
#include<bitset>
#include<vector>
#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<sstream>
#include<cstring>
using namespace std;
typedef long long int ll;
typedef long double ld;
struct xr{
	double x,y,z,w,a,b,c;
	char t;
};
bool okr(xr x,double a,double b){
	return (a>x.x&&a<x.z)&&(b<x.y&&b>x.w);
}
bool okc(xr x,double a,double b){
	return (sqrt((a-x.a)*(a-x.a)+(b-x.b)*(b-x.b))<x.c);
}
int main(){
	//freopen("a.txt","r",stdin);
	char c;
	int t=1;
	double x,y,z,w;
	vector<pair<int,xr>>vr;
	while(scanf(" %c",&c),c!='*'){
		xr a;
		a.t=c;
		if(c=='r'){
			scanf("%lf%lf%lf%lf",&x,&y,&z,&w);
			a.x=x;
			a.y=y;
			a.z=z;
			a.w=w;
			vr.push_back(make_pair(t++,a));
		}
		else {
			scanf("%lf%lf%lf",&x,&y,&z);
			a.a=x;
			a.b=y;
			a.c=z;
			vr.push_back(make_pair(t++,a));
		}
	}
	int point=1;
	while(scanf("%lf%lf",&x,&y),x!=9999.9){
		bool f=0;
		for(int i=0;i<vr.size();i++){
			if((vr[i].second.t=='r'&&okr(vr[i].second,x,y))||(vr[i].second.t=='c'&&okc(vr[i].second,x,y))){
				printf("Point %d is contained in figure %d\n",point,vr[i].first);
				f=1;
			}
		}
		if(!f)
			printf("Point %d is not contained in any figure\n",point);
		point++;
	}
	return 0;
}