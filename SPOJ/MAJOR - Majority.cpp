    #include<algorithm>
    #include<vector>
    #include<cstdio>
    using namespace std;
    int main(){
    	//freopen("a.txt","r",stdin);
    	int t,n,x,c;
    	vector<int>v;
    	scanf("%d",&t);
    	while(t--){
    		c=0;
    		v.clear();
    		scanf("%d",&n);
    		v.resize(n);
    		for(int i=0;i<n;i++)scanf("%d",&v[i]);
    		x=v[0];
    		for(int i=0;i<n;i++){
    			if(v[i]==x)c++;
    			else if(c==1)x=v[i];
    			else c--;
    		}
    		c=0;
    		for(int i=0;i<n;i++)
    			if(v[i]==x)c++;
    		if(c>n/2)printf("YES %d\n",x);
    		else puts("NO");
    	}
    	return 0;
    }
