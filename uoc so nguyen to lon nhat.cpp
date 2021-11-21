#include <iostream>
#include<cmath>
using namespace std;
int ngto(long long  n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)	return 0;
	}return 1;
}
int main() {
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		for(long long  i=1;i<n;i++){
		if(n % i ==0 && ngto(n/i))	{	cout << n/i << endl; 
				break;
			}
		}
	}
}
