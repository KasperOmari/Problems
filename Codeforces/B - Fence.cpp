#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int cum[N];
int main()
{
	cum[0]=0;
	int n,m,h,mn=1e9;
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		cin >>h;
		cum[i]=h+cum[i-1];
	}
	int loc=0;
	for(int i=1;i+m-1<=n;i++){
		if(cum[i+m-1]-cum[i-1]<mn){
			loc=i;
			mn=cum[i+m-1]-cum[i-1];
		}
	}
	cout <<loc<<endl;
	return  0;
}