#include<iostream>
using namespace std;
int kt(int n){
	int a;
	while(n>0){
		a=n%10;
		if(a!=0 && a!=6 && a!=8 )	return 0;
		n/=10;
	}return 1;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(kt(n))	cout << "YES" << endl;
		else cout << "NO" << endl;
	} 
}
