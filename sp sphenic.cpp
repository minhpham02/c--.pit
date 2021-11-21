#include<iostream>
using namespace std;
int main (){
	int t,n;
	cin >> t; 
	while(t--){
		int d=0;
		cin >> n;
		for(int i=0;i<n;i++){
			if(n%i==0){
				d++;
				n /= i;
			}
		}
			if(d==3)	cout << "1" << endl;
			else cout << "0" << endl;
		}
	}
