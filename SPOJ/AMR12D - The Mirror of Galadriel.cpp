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
    	int t;
    	scanf("%d",&t);
    	string s,tmp;
    	while(t--){
    		cin >>s;
    		bool f=0;
    		for(int i=1;i<=s.size();i++){
    			tmp=s.substr(0,i);
    			reverse(tmp.begin(),tmp.end());
    			if(s.find(tmp)!=s.npos)f=1;
    			else {f=0;break;}
    		}
    		puts(f?"YES":"NO");
    	}
    	return 0;
    } 
