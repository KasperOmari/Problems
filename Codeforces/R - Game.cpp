#include<cstdio>
#define sci(n) scanf("%lld",&n)
using namespace std;
typedef long long int ll;
ll n;
int main(){
	sci(n);
	puts(n%2?"1":"2");
	return 0;
}