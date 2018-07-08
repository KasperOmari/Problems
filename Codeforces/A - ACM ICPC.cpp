#include<bits/stdc++.h>
using namespace std;
int a[7];
int main(){
  for(int i=0;i<6;++i){
    scanf("%d",a+i);
  }
  sort(a,a+6);
  do{
    if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5]){
      puts("YES");
      return 0;
    }
  }while(next_permutation(a,a+6));
  puts("NO");
  return 0;
}