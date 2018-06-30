    #include<set>
    #include<cstdio>
    using namespace std;
    int main(){
    	//freopen("a.txt","r",stdin);
    	set<int>st;
    	int n,t,id,m,x;
    	scanf("%d",&n);
    	t=n;
    	while(n--){
    		scanf("%d%d",&id,&m);
    		st.insert(id);
    		while(m--){
    			scanf("%d",&x);
    			st.insert(x);
    		}
    	}
    	printf("%d\n",st.size()-t);
    	return 0;
    }
