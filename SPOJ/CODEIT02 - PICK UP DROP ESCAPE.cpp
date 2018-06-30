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
    vector<int>v;
    int t,n,k,x;
    int sol(int indx,int l,int x){
    	if(indx==v.size())return l==k?x:-1e9;
    	int f=sol(indx+1,l,x);
    	if(l<k)
    		f=max(f,sol(indx+1,l+1,x^v[indx]));
    	return f;
    }
    int main(){
    	scanf("%d",&t);
    	while(t--){
    		v.clear();
    		scanf("%d%d",&n,&k);
    		while(n--){
    			scanf("%d",&x);
    			v.push_back(x);
    		}
    		printf("%d\n",sol(0,0,0));
    	}
    	return 0;
    } 
