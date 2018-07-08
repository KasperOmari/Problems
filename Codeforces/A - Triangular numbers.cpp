#include<iostream>
using namespace std;
int arr[]={0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496};
int main(){
	int n;
	cin >>n;
	for(int i=0;i<32;i++){
		if(n==arr[i]){
			cout <<"YES\n";
			return 0;
		}
	}
	cout <<"NO\n";
	return 0;
}