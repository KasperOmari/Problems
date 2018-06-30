    #define _CRT_SECURE_NO_WARNINGS
    #include<iostream>
    #include<string>
    #include<cmath>
    #include<math.h>
    #include<memory.h>
    #include<cctype>
    #include<algorithm>
    #include<set>
    #include<map>
    #include<queue>
    #include<stack>
    #include<utility>
    #include<iomanip>
    #include<vector>
    #include<cassert>
    #include<cstdio>
    #include<cstdlib>
    #include<sstream>
    #include<cstring>
    using namespace std;
    int main()
    {
    	int n;
    	vector<int>v;
    	while(cin >>n){
    		if(n==42)
    			break;
    		v.push_back(n);
    	}
    	for(int i=0;i<v.size();i++){
    		cout <<v[i]<<endl;
    	}
    	return  0;
    } 
