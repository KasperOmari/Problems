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
    int main(){
    	int n;
    	scanf("%d",&n);
    	vector<int>v(n),v1,v2;
    	for(int i=0;i<n;i++)scanf("%d",&v[i]);
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			for(int k=0;k<n;k++){
    				v1.push_back(v[i]*v[j]+v[k]);
    			}
    		}
    	}
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			for(int k=0;k<n;k++){
    				if(v[k])
    				v2.push_back((v[i]+v[j])*v[k]);
    			}
    		}
    	}
    	sort(v1.begin(),v1.end());
    	sort(v2.begin(),v2.end());
    	int sol=0;
    	for(int i=0;i<v2.size();i++)
    		sol+=(upper_bound(v1.begin(),v1.end(),v2[i])-v1.begin())-(lower_bound(v1.begin(),v1.end(),v2[i])-v1.begin());
    	printf("%d\n",sol);
    	return 0;
    } 
