#include<iostream>
#include <iomanip>
using namespace std;
main(){
	int  n;
	long long s=1,k=0; 
	cin >> n;
	for(int i = 1; i <= n; i++){
		s =  s * i;
		k = s+ k; 
	}
	cout << k;
}

