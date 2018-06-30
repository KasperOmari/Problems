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
    int main(){
    	//freopen("a.txt","r",stdin);
    	int x;
    	vector<int>v;
    	for(int i=0;i<10;i++){
    		scanf("%d",&x);
    		v.push_back(x);
    	}
    	x=0;
    	for(int i=0;i<10;i++){
    		x+=v[i];
    		if(x>=100){
    			if(x-100<=100-(x-v[i]))printf("%d\n",x);
    			else printf("%d\n",x-v[i]);
    			return 0;
    		}
    	}
    	printf("%d",x);
    	return 0;
    } 
