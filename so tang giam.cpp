#include<iostream>
#include<cmath>
using namespace std;
main(){
	int t, b[8]={20,38,50,38,20,8,5,0};
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << b[n-2] << "\n";
	}
}
