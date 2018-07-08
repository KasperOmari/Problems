#include <bits/stdc++.h>
using namespace std;
int n,m;
char g[55][55];
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
		scanf("%s",g[i]);
	for(int i=0;i<n;++i)
		for(int ii=0;ii<n;++ii)
			for(int j=0;j<m;++j)
				if(g[i][j]=='#'&&g[ii][j]=='#')
					for(int jj=0;jj<m;++jj)
						if(g[i][jj]!=g[ii][jj])
							return puts("No"),0;
	puts("Yes");
	return 0;
}