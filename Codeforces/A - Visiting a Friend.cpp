#include <iostream>
using namespace std;
int n,m,x,y,a;
int main() {
  cin >>n>>m;
  while(n--){
    cin >>x>>y;
    if(a>=x&&a<y)a=y;
  }
  puts(a==m?"YES":"NO");
  return 0;
}