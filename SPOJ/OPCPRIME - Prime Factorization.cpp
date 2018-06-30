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
    #define N 1000010
    #define MP make_pair
    using namespace std;
    typedef long long int ll;
    typedef long double ld;	
    bool prime[N];
    void sieve(){
    	prime[0]=prime[1]=1;
    	for(int i=2;i*i<N;i++){
    		if(!prime[i])
    			for(int j=i*i;j<N;j+=i)
    				prime[j]=1;
    	}
    }
    void primeFac(ll n){
    	ll t=n;
    	for(int i=2;ll(i)*ll(i)<=n;++i)
    		if(n%i==0&&!prime[i]){
    			printf("%d\n",i);
    			while(t%i==0)
        			t/=i;
    		}
    	if(t>1)printf("%lld\n",t);
    }
    int main(){
    	sieve();
    	ll n;
    	scanf("%lld",&n);
    	primeFac(n);
    	return  0;
    } 
