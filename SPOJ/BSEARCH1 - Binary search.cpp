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
    int n,q,a,x;
    vector<int>v;
    int main()
    {
    	scanf("%d%d",&n,&q);
    	v.resize(n);
    	for(int i=0;i<n;i++)cin >>v[i];
    	sort(v.begin(),v.end());
    	while(q--){
    		scanf("%d",&a);
    		x=lower_bound(v.begin(),v.end(),a)-v.begin();
    		if(x<v.size()&&v[x]==a)
    			printf("%d\n",x);
    		else puts("-1");
    	}
    	return  0;
    } 
