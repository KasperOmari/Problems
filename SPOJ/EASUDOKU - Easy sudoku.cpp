    #include <bits/stdc++.h>
    using namespace std;
    int dx[]={0,0,1,-1,1,1,-1,-1};
    int dy[]={1,-1,0,0,1,-1,-1,1};
    typedef long long int ll;
    int n,t;
    int g[9][9];
    bool r[9][10],c[9][10],blk[3][3][10];
     
    void update(int i,int j,int val,bool f){
    	blk[i/3][j/3][val]=f;
    	r[i][val]=f;
    	c[j][val]=f;
    }
    bool clac(int i,int j){
    	if(j==9)return clac(i+1,0);
    	if(i==9){
    		puts("");
    		for(int i=0; i<9; ++i,puts(""))
    			for(int j=0; j<9; ++j)
    				printf("%d ",g[i][j]);
    		
    		return true;
    	}
    	if(g[i][j])return clac(i,j+1);
    	for(int k=1;k<10;++k){
    		if(!r[i][k]&&!c[j][k]&&!blk[i/3][j/3][k]){
    			update(i,j,k,true);
    			g[i][j]=k;
    			if(clac(i,j+1))return 1;
    			update(i,j,k,false);
    		}
    	}
    	g[i][j]=0;
    	return 0;
    }
    int main(){ 
    #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    #endif
    	scanf("%d",&t);
    	for(int T=0;T<t;++T){
    		memset(r,0,sizeof r);
    		memset(c,0,sizeof c);
    		memset(blk,0,sizeof blk);
    		for(int i=0;i<9;++i)
    			for(int j=0;j<9;++j){
    				scanf("%d",&g[i][j]);
    				if(g[i][j])update(i,j,g[i][j],true);
    			}
    		if(!clac(0,0))puts("No solution");
    	}
     
    	return 0;
    } 
