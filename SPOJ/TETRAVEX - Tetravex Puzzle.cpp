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
    	//freopen("a.txt","r",stdin);
    	int t,a,b,c,d;
    	vector<pair<int,pair<int,pair<int,int> > > >v;
    	vector<int>indx;
    	scanf("%d",&t);
    	for(int cas=1;cas<=t;cas++){
    		v.clear();
    		indx.clear();
    		for(int i=0;i<9;i++)indx.push_back(i);
    		for(int i=0;i<9;i++){
    			scanf("%d%d%d%d",&a,&b,&c,&d);
    			v.push_back(make_pair(a,make_pair(b,make_pair(c,d))));
    		}
    		bool f=0;
    		printf("Case %d: ",cas);
    		do{
    			if(v[indx[0]].second.first==v[indx[1]].second.second.second&&v[indx[2]].second.second.second==v[indx[1]].second.first&&v[indx[0]].second.second.first==v[indx[3]].first&&v[indx[1]].second.second.first==v[indx[4]].first&&v[indx[2]].second.second.first==v[indx[5]].first&&v[indx[3]].second.first==v[indx[4]].second.second.second&&v[indx[4]].second.first==v[indx[5]].second.second.second&&v[indx[3]].second.second.first==v[indx[6]].first&&v[indx[4]].second.second.first==v[indx[7]].first&&v[indx[5]].second.second.first==v[indx[8]].first&&v[indx[6]].second.first==v[indx[7]].second.second.second&&v[indx[7]].second.first==v[indx[8]].second.second.second){
    				f=1;
    				break;
    			}
    		}while(next_permutation(indx.begin(),indx.end()));
    		puts(f?"YES":"NO");
     
    	}
    	return 0;
    } 
