#include<iostream>
using namespace std; 
int kt(int n){
	int a,b;
	while(n>0){
		a=n%10;
		if(a==6){
			n /= 10;
			b = n%10;
			if(b==8){	return 1;
			}else return 0;
		}else return 0;	
	}
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(kt(n))	cout << "1" << endl;
		else cout << "0" << endl;
	}
} 
