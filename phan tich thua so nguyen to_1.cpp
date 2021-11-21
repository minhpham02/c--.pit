#include<iostream>
#include<cmath>
using namespace std;
int ngto(int  n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)	return 0;
	}return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n<2)	cout << "2" << " " << "1" << endl;
		for(int i=2;i<n;i++){
			if(ngto(i)){
				int m=0;
				while(n%i==0){
					m++;
					n /=i;
				}if(m>0){
				 cout << i << " " << m << " ";
				}	
			}
		}if(ngto(n)) cout << n <<" " << "1";
		 cout << endl;
	}
}
