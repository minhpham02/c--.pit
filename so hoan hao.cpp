#include<iostream>
#include<cmath>
using namespace std;
long long kt(long long n){
	long long s=1;
	if(n==6 || n==28 || n==496 || n==8128) return 1;
	for(long long i=10000;i<=sqrt(n);i++){
		if(n%i==0)	s=s+i+n/i;	
	}if(s==n)	return 1;
		return 0;
}
int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		if(kt(n))	cout << "1" << endl;
		else cout << "0" << endl;
	}
}
