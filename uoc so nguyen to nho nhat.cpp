#include<iostream>
#include<cmath>
using namespace std;
int nt(long long  n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)	return 0;
	}return 1;
}
void kt(long long n){
	if(n==1)	cout << n << " ";
	for(int j=3;j<=sqrt(n);j++){
		if(n%j==0){
			cout << j << " "; break;
		}
	}
}
int main(){
	int t;
	long long n; 
	cin >> t;
	while(t--){
		cin >> n;
		for(long long i=1;i<=n;i++){
			if(i%2==0){	cout << "2" << " ";
			}else if(nt(i))	cout << i << " ";
			else kt(i);	
		}cout <<  endl;
	}
}
