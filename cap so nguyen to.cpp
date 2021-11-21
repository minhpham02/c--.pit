#include<iostream>
#include<cmath>
using namespace std;
int ngto(int n){
	if(n<2)	return 0 ;
	for(int i=2 ; i <= sqrt(n);i++){
		if(n % i == 0)	return 0;
	} return 1;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=2;i<=n;i++){
			if(ngto(i) && ngto(n-i)){	cout << i << " " << n-i << endl; 
			break;
			}
		}
	}
}
