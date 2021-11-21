#include <iostream>
#include<cmath>
using namespace std;
int ngto(int n){
	if(n<2)	return 0;
	for(int i=2;i<= sqrt(n);i++){
		if(n%i==0)	return 0;
	}return 1;
}
int main() {
	int n;
	cin >> n;
	if(ngto(n) && n!=0 && n!= 1)	cout << "YES";
	else cout << "NO";
}
