#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	long long n;
	cin >> t ;
	while(t--){
		cin >> n;
		int c=0;
		if(n==2){	cout << "1" << endl; 	continue;
	}
		for(int i=2;i<=sqrt(n);i++){
			int d=1;
			while(n%2==0){
				n /= 2;
				c++;
			}while(n%i==0){
				n /= i;
				d++;
			} c=c*d;
		}if(n>1){
			 c= c*2;
		}
		cout << c << endl;
	}
}

