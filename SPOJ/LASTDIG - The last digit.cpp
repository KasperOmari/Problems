    #include<cmath>
    #include<cstdio>
    using namespace std;
    int po(int a,int b){
    	if(b==0)return 1;
    	int x=po(a,b/2);
    	x*=x;
    	if(b&1)x*=a;
    	return x%10;
    }
    int main(){
    	int t,a,b;
    	scanf("%d",&t);
    	while(t--){
    		scanf("%d%d",&a,&b);
    		printf("%d\n",po(a%10,b));
    	}
    	return 0;
    } 
